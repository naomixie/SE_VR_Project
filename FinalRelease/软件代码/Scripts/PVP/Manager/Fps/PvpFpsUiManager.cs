using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PvpFpsUiManager : MonoBehaviour
{
    public Canvas fpsCanvas;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Init()
    {
        fpsCanvas.gameObject.SetActive(true);
    }
}
