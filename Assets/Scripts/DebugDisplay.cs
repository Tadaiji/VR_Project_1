using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DebugDisplay : MonoBehaviour
{
    Dictionary<string, string> debugLogs = new Dictionary<string, string>();

    public TextMeshProUGUI display;

    private void Start()
    {
        //Subscribe to debug messages
        Application.logMessageReceived += HandleLog;
    }

    private void Update()
    {
        //stays in console only for VR 
        Debug.Log("time: " + Time.time);
        Debug.Log(gameObject.name);
    }

    private void OnEnable()
    {
        //Subscribe to debug messages
        Application.logMessageReceived += HandleLog;
    }

    private void OnDisable()
    {
        //Unsubscribe to debug messages
        Application.logMessageReceived -= HandleLog;
    }

    void HandleLog(string logString, string stackTrace, LogType type)
    {
        if (type == LogType.Log)
        {
            string[] splitString = logString.Split(char.Parse(":"));
            string debugKey = splitString[0];
            string debugValue = splitString.Length > 1 ? splitString[1] : "";

            if (debugLogs.ContainsKey(debugKey))
                debugLogs[debugKey] = debugValue;
            else
                debugLogs.Add(debugKey, debugValue);
        }
        
        //build out text
        string displayText = "";
        foreach (KeyValuePair<string, string> log in debugLogs)
        {
            if (log.Value == "")
                displayText += log.Key + "\n";
            else
                displayText += log.Key +":" + log.Value + "\n";
            
        }
        display.text = displayText;
    }
    
    
}
