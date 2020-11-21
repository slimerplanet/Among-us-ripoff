using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class vent_system : MonoBehaviour
{
    public vent[] vents;
    public int curVent;

    public void enterVent(GameObject player)
    {
        player.GetComponent<PlayerManager>().body.SetActive(false);


    }
}
