using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RiddleBrain : MonoBehaviour
{
    // Start is called before the first frame update

    // [SerializeField] private Transform riddleManagerParent;
    public RiddleManager[] riddleManagers;

    public RiddleManager currentRiddleManager;
    [SerializeField] private int currentRiddleManagerIndex = 0;

    void Start()
    {
        // riddleManagerParent = gameObject.transform.GetChild(0);
        riddleManagers = transform.GetComponentsInChildren<RiddleManager>();
        SetManager(riddleManagers[currentRiddleManagerIndex]);
    }

    // Update is called once per frame
    void Update()
    {
        if(currentRiddleManager.IsCleared())
        {
            SetManager(riddleManagers[++currentRiddleManagerIndex]);
        }
    }

    public void ActiveRiddle(RiddleManager riddleManager, Riddle riddle, int interactCode)
    {
        Debug.Log("Activating " + riddleManager.gameObject.name + " : " + riddle.riddleName + " - " + interactCode);
        riddleManager.ActiveRiddle(riddle.riddleName, 1);
    }

    public void SetManager(RiddleManager riddleManager)
    {
        currentRiddleManager = riddleManager;
    }
}
