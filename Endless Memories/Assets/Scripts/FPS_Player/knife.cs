using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class knife : MonoBehaviour
{
    public int colorID; // 1~5
    public Light knifeLight;
    public Rigidbody rb;
    // Start is called before the first frame update
    private void Awake ()
    {
        if (colorID < 0 || 5 < colorID)
        {
            colorID = Random.Range(1, 6); //exclusive white 0
        }
    }
    void Start()
    {
        switch(colorID)
        {
            case 0: //white
                knifeLight.color = new Color(1.0f, 1.0f, 1.0f);
                break;
            case 1: //green
                knifeLight.color = new Color(0.0f, 1.0f, 0.0f);
                break;
            case 2: //purpole
                knifeLight.color = new Color(1.0f, 0.0f, 1.0f);
                break;
            case 3: //blue
                knifeLight.color = new Color(0.0f, 0.0f, 1.0f);
                break;
            case 4: //red
                knifeLight.color = new Color(1.0f, 0.0f, 0.0f);
                break;
            case 5: //yellow
                knifeLight.color = new Color(1.0f, 1.0f, 0.0f);
                break;
        }
    }
    void OnCollisionEnter(Collision collision)
    {
        Debug.Log("knife stubed at " + collision.gameObject.tag + ", " + collision.gameObject.name);
        if (collision.gameObject.tag.Equals("Chaser"))
        {
            double spd = rb.velocity.magnitude;
            if (spd > 0.5) {
                if(collision.gameObject.GetComponent<Chase>().knifeStubWithColor(colorID)) //stub success
                {
                    Destroy(this.gameObject); //temporary delete both of entities
                    Transform chaserTrans = collision.gameObject.GetComponent<Transform>();
                    for (int i = 0; i < chaserTrans.childCount; ++i)
                    {
                        GameObject chaserChildObj = chaserTrans.GetChild(i).gameObject;
                        if (chaserChildObj.name.Equals("model"))
                        {
                            Destroy(chaserChildObj);
                        } else if (chaserChildObj.name.Equals("PaperCrane"))
                        {
                            chaserChildObj.SetActive(true);
                        }
                    }
                }
            }
        }
    }
    // Update is called once per frame
    void Update()
    {
    }
}
