using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : NetworkBehaviour
{
    public bool isImpostor;
    public bool isDead;

    public int color;

    public Texture[] colors;
    public Texture[] backbagColors;

    public Material bodyMat;
    public Material backMat;


    [Header("networking")]
    public string remotePlayerLayerName;
    public GameObject body;
    public Behaviour[] stufftoDisable;


    private void Start()
    {
        if(!isLocalPlayer)
        {
            for (int i = 0; i < stufftoDisable.Length; i++)
            {
                stufftoDisable[i].enabled = false;
            }
            body.layer = LayerMask.NameToLayer(remotePlayerLayerName);
        }


    }
    private void Update()
    {
        bodyMat.mainTexture = colors[color];
        backMat.mainTexture = backbagColors[color];
    }

}
