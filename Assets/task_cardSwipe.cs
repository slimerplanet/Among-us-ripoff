using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class task_cardSwipe : MonoBehaviour
{
    public Slider slider;
    public TaskManager manager;
    public GameObject panel;

    bool inTrigger;

    bool t = true;
    private void Update()
    {
        if(slider.value == 1)
        {
            manager.cardSwipeCompleted = true;
            panel.SetActive(false);
            manager.isIntask = false;
            manager.taskscompleted++;
            slider.value = 0;
        }
        if(inTrigger && Input.GetKeyDown(KeyCode.E) && manager.hasCardSwipe)
        {
            panel.SetActive(true);
        }


    }

    public void OpenTask()
    {
        manager.isIntask = true;
        panel.SetActive(true);
    }



    
}
