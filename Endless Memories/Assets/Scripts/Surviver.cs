using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine;

public class Surviver : MonoBehaviourPun
{
    public static Surviver instance;

    // BGM
    public AudioSource noticedBGM;
    public AudioSource chasingBGM;

    // Input
    public CharacterController controller;

    // Movement
    public float speed = 12f;
    public float gravity = -9.81f;
    public float jumpHeight = 3f;

    // PVP
    private int solo = 1;

    // Movement, Ground check, Gravity
    Vector3 velocity;
    public Transform groundCheck;
    public float groundDistance = 0.4f;
    public LayerMask groundMask;
    bool isGrounded;

    // Inspections
    private Raycast raycast;
    private Inspection inspection;
    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        raycast = GetComponent<Raycast>();
        inspection = GetComponentInChildren<Inspection>();
    }

    // Update is called once per frame
    void Update()
    {
        if (solo == 1 || photonView.IsMine)
        {
            ProcessInput();
        }
    }

    private void ProcessInput()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);
        if (isGrounded && velocity.y < 0)
        {
            // -2f works a bit better than 0f
            velocity.y = -2f;
        }

        // Walking
        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");
        Vector3 move = transform.right * x + transform.forward * z;
        controller.Move(move * speed * Time.deltaTime);

        // Jump
        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
        }

        // Gravity
        velocity.y += gravity * Time.deltaTime;
        controller.Move(velocity * Time.deltaTime);

        // Footsteps's sounds
        if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.D))
        {
			GameObject.FindGameObjectWithTag("Chaser").GetComponent<Chase>().noticeSound(1, transform.position);
        }

        //// Item Interaction

        // TODO: Change to VR controller
        // Destroys Item
        if (EventSystem.current.IsPointerOverGameObject())
            return;

        //if (Input.GetKeyDown("r"))
        //{
        //    Debug.Log("Pressed r");
        //    DestroyObject(raycast.GetInteractableRaycastedObject());
        //}

        //if (Input.GetKeyDown("q"))
        //{
        //    Debug.Log("Pressed q");
        //    Destroy(raycast.GetInteractableRaycastedObject());
        //}

        // Interact item (collects or Inspects (Pop out dialogue))
        if (Input.GetKeyDown("e") || Input.GetKeyDown("f"))
        {
            //TODO: add Tag identification for different types of interactable objects
            Debug.Log("Pressed e or f");
            InteractableT interactableT = raycast.GetInteractableRaycastedObject();
            if (interactableT != null)
            {
                Debug.Log("In != null");
                interactableT.GetComponent<InteractableT>().Interact();
            }
        }
        
        // Inspect item
        if (Input.GetKeyDown("v"))
        {
            Debug.Log("Pressed v");
            inspection.Inspect(RaycastedObject());
        }

        // Use item
        if (Input.GetKeyDown("u"))
        {
            Item item = ItemInHand();
            if(item == null)
            {
                Debug.Log("Pressed u, no item in hand");
            }
            else
            {
                Debug.Log("Pressed u, item in hand is " + item.gameObject.name);
                item.Use();
            }   
        }
    }

    public Item ItemInHand()
    {
        return InventoryUI.instance.getSelectedItem();
    }

    public GameObject RaycastedObject()
    {
        return raycast.GetRaycastedObject();
    }
}
