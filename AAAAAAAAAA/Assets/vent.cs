using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class vent : MonoBehaviour
{
    public Transform exit;
    public vent_system sys;

    bool inTrigger;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("localplayer"))
        {
            inTrigger = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("localplayer"))
        {
            inTrigger = false;
        }
    }

    private void Update()
    {
        if(inTrigger && GameObject.FindGameObjectWithTag("localplayer").GetComponent<PlayerManager>().isImpostor && Input.GetKeyDown(KeyCode.E))
        {
            sys.enterVent();
        }
    }

}
