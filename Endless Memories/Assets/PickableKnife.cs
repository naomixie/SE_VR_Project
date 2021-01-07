using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickableKnife : MonoBehaviour
{
    public GameObject fpsPlayer;

    public bool holdingKnife = false;

    public Transform knifeModel;

    public int knifeShootPower = 10;

    // Start is called before the first frame update
    void Start()
    {
        fpsPlayer = GameObject.FindGameObjectWithTag("First Person Player");
    }

    // Update is called once per frame
    void Update()
    {
        if(fpsPlayer == null)
            fpsPlayer = GameObject.FindGameObjectWithTag("First Person Player");
        
    }

    public void Pick()
    {
        knifeModel = fpsPlayer.transform.GetChild(1);


        /*gameObject.transform.position = knifeModel.position;
        gameObject.GetComponent<Rigidbody>().isKinematic = true;*/

        // holdingKnife = true;
    }

    public void Throw()
    {
        // holdingKnife = false;

        Vector3 fwd;

        gameObject.transform.position = knifeModel.position;
        gameObject.transform.rotation = knifeModel.rotation;

        fwd = transform.TransformDirection(Vector3.forward);//Vector3 表示三维向量，vector3.forward的值永远等于（0，0，1）。

        gameObject.GetComponent<Rigidbody>().AddForce(fwd * knifeShootPower);
    }
}
