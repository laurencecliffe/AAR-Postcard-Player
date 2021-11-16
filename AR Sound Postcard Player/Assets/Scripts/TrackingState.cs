using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

public class TrackingState : MonoBehaviour
{


[SerializeField] ARSession m_Session = null;
    [SerializeField] Text m_Text = null;
    

    void Awake()
    {
        if (m_Session != null)
        {
            m_Session.enabled = false;
        }
        if (m_Text != null)
        {
            m_Text.text = "";
        }
        
    }

    IEnumerator Start() {
        if ((ARSession.state == ARSessionState.None) ||
            (ARSession.state == ARSessionState.CheckingAvailability))
        {
            yield return ARSession.CheckAvailability();
        }

        if (ARSession.state == ARSessionState.Unsupported)
        {
            // Start some fallback experience for unsupported devices
        }
        else
        {
            // Start the AR session
            m_Session.enabled = true;
        }
    }

    void Update()
    {
        string text = "";
        

        if (m_Session == null)
        {
            text = "ARSession not found on " + this.gameObject.name;
            
        }
        else
        {
            switch (ARSession.state)
            {
                case ARSessionState.None:
                    text = "Sorry, AR is not currently working on this device and we're not sure why.";
                    
                    break;
                case ARSessionState.Unsupported:
                    text = "Sorry, AR is not supported on this device.";
                    
                    break;
                case ARSessionState.CheckingAvailability:
                    text = "Checking the availability of AR on this device.";
                    
                    break;
                case ARSessionState.NeedsInstall:
                    text = "AR requires an additional install on this device.";
                    
                    break;
                case ARSessionState.Installing:
                    text = "AR software is being installed";
                    
                    break;
                case ARSessionState.Ready:
                    text = "AR is supported and ready";
                    
                    break;
                case ARSessionState.SessionInitializing:
                    text = "Please do not obscure your device's camera and ensure area is well lit.";
                    
                    break;
                case ARSessionState.SessionTracking:
                    text = "Point your camera at your AR Sound Postcards to hear the exhibits.";
                    
                    break;
            }
        }

        if (m_Text != null)
        {
            m_Text.text = text;
        }

        
    }










}
