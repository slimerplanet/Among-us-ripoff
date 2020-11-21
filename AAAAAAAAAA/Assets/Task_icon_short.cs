using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Task_icon_short : MonoBehaviour
{
    public TaskManager manager;
    
    public bool swipe;
    public bool download;
    public downUpLoadSpot spot;


    private void Update()
    {
        if(manager.hasCardSwipe && swipe && !manager.cardSwipeCompleted)        
            gameObject.SetActive(true);
        else 
            gameObject.SetActive(false);

        if (spot.hasTaskHere && !manager.downloadCompleted)
            gameObject.SetActive(true);
        else
            gameObject.SetActive(false);

        
    }
}
