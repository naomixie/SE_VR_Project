using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldGlobe : InteractableT
{
    // Start is called before the first frame update

    public GameObject clock;
    [SerializeField] private int spinnedTimes = 0;
    [SerializeField] private Animation spinAnim;
    [SerializeField] private bool done = false;

    private void Update() {
    }

    public override void Interact()
    {
        base.Interact();
        WorldGlobeSpin();
    }

    public void WorldGlobeSpin()
    {
        // spinAnim.Play("WorldGlobe");
        if(!done)
        {
            if(spinnedTimes < 3)
                spinnedTimes++;
            else
            {
                clock.GetComponent<Animator>().Play("Clock Fall");
                done = true;
            }
        }
    }
}
