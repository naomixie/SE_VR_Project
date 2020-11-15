using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Promptbox : MonoBehaviour
{
    public Camera _camera;
    // public Position position;
    // Use this for initialization
    void Start()
    {
        _camera = GameObject.Find("Main Camera").GetComponent<Camera>();//获取场景中摄像机对象的组件接口 
        
    }
    void Update()
    {
        //position = GameObject.Find("Crosshair").transform.localPosition；
    }
    void OnGUI()
    {
        Ray ray = _camera.ScreenPointToRay(Input.mousePosition);    //定义一条射线，这条射线从摄像机屏幕射向鼠标所在位置
        RaycastHit hit;    //声明一个碰撞的点
        if (Physics.Raycast(ray, out hit))
        {    //如果真的发生了碰撞，ray这条射线在hit点与物体碰撞了
            if (hit.transform.name == "Apple")
            {//判断碰撞体是不是Cube
                GUI.Box(new Rect(Input.mousePosition.x, Screen.height - Input.mousePosition.y, 100, 100), "This is an Apple");
            }
            if (hit.transform.name == "Gem")
            {//判断碰撞体是不是Cube
                GUI.Box(new Rect(Input.mousePosition.x, Screen.height - Input.mousePosition.y, 100, 100), "This is a Gem");
            }
            if (hit.transform.name == "Interactable")
            {//判断碰撞体是不是Cube
                GUI.Box(new Rect(Input.mousePosition.x, Screen.height - Input.mousePosition.y, 100, 100), "This is an Interactable");
            }
        }
    }
}