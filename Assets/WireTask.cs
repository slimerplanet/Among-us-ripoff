﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WireTask : MonoBehaviour
{
    public List<Color> _wireColors = new List<Color>();
    public List<Wire> _leftWires = new List<Wire>();
    public List<Wire> _rightWires = new List<Wire>();

    public Wire CurrentDraggedWire;
    public Wire CurrentHoveredWire;

    public bool IsTaskCompleted = false;

    private List<Color> _availableColors;
    private List<int> _availableLeftWireIndex;
    private List<int> _availableRightWireIndex;

    [Header("")]
    public GameObject panel;
    public TaskManager manager;

    bool t = true;

    private void Start()
    {
        
    }

    private IEnumerator CheckTaskCompletion()
    {
        while (!IsTaskCompleted)
        {
            int successfulWires = 0;

            for (int i = 0; i < _rightWires.Count; i++)
            {
                if (_rightWires[i].IsSuccess) { successfulWires++; }
            }
            if (successfulWires >= _rightWires.Count)
            {
                Debug.Log("TASK COMPLETED");
                
                if(t)
                {
                    manager.wiresCompleted++;
                    t = false;
                }

                IsTaskCompleted = true;                
                CloseTask();
            }
            else
            {
                Debug.Log("TASK INCOMPLETED");
            }

            yield return new WaitForSeconds(0.5f);
        }
    }

    public void OpenTask()
    {
        t = true;
        manager.isIntask = true;
        panel.SetActive(true);
        


        IsTaskCompleted = false;
        init();
        
        

    }

    public void CloseTask()
    {
        panel.SetActive(false);
        manager.isIntask = false;
    }

    public void init()
    {
        foreach (Wire wire in _rightWires)
        {
            wire.IsSuccess = false;
        }
        foreach (Wire wire1 in _leftWires)
        {
            wire1.IsSuccess = false;
        }

        _availableColors = new List<Color>(_wireColors);
        _availableLeftWireIndex = new List<int>();
        _availableRightWireIndex = new List<int>();

        for (int i = 0; i < _leftWires.Count; i++)
        {
            _availableLeftWireIndex.Add(i);
        }

        for (int i = 0; i < _rightWires.Count; i++)
        {
            _availableRightWireIndex.Add(i);
        }

        while (_availableColors.Count > 0 &&
               _availableLeftWireIndex.Count > 0 &&
               _availableRightWireIndex.Count > 0)
        {
            Color pickedColor =
             _availableColors[Random.Range(0, _availableColors.Count)];

            int pickedLeftWireIndex = Random.Range(0,
                                      _availableLeftWireIndex.Count);
            int pickedRightWireIndex = Random.Range(0,
                                      _availableRightWireIndex.Count);
            _leftWires[_availableLeftWireIndex[pickedLeftWireIndex]]
                                              .SetColor(pickedColor);
            _rightWires[_availableRightWireIndex[pickedRightWireIndex]]
                                              .SetColor(pickedColor);

            _availableColors.Remove(pickedColor);
            _availableLeftWireIndex.RemoveAt(pickedLeftWireIndex);
            _availableRightWireIndex.RemoveAt(pickedRightWireIndex);                                
        }

        StartCoroutine(CheckTaskCompletion());
    }


}
