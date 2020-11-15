using System.Collections;
using System.Collections.Generic;
using System.Runtime.Hosting;
using UnityEngine;
using UnityEngine.UI;

public class Setting : MonoBehaviour
{
    public CanvasGroup canvasGroup;
    // Start is called before the first frame update
    void Start()
    {
        canvasGroup = GameObject.Find("Setting").GetComponent<CanvasGroup>();
    }

    // Update is called once per frame
    void Update()
    {
       
    }


}
