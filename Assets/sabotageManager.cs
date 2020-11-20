using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sabotageManager : NetworkBehaviour
{
    [SyncVar] public bool lightsSabotaged;
    public float intesity = 100f;
    public float sabotagedIntensity = 0f;


    public Light[] lights;

    
    public void sabotageLights()
    {

            

        for (int i = 0; i < lights.Length; i++)
        {
            lights[i].enabled = false;
        }
        
        lightsSabotaged = true;
        
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.K))
        {
            sabotageLights();
        }
    }
}
