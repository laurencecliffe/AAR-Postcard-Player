using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MenuControl : MonoBehaviour
{
    Scene activeScene;
    string sceneName;
    FMOD.Studio.Bus masterBus;
    GameObject[] objects;
    //FMOD.Studio.EventInstance[] instances;

    GameObject[] audioInstances;
   
    // Start is called before the first frame update
    void Start()
    {
        activeScene = SceneManager.GetActiveScene();
        sceneName = activeScene.name;
        masterBus = FMODUnity.RuntimeManager.GetBus("Bus:/");
        objects = (FindObjectsOfType<GameObject>() as GameObject[]);
        // tag all audio sources, then get them, then get the components, then release them...?
        audioInstances = GameObject.FindGameObjectsWithTag("AudioInstance");
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Play() {
       

        if (sceneName == "Intro") {

            

            SceneManager.LoadScene("ImageTracker");
        }

         if (sceneName == "ImageTracker") {

             // Destroy all the scene's GameObjects
             for (int i = 0; i < audioInstances.Length; i++)
                {
                    Destroy(audioInstances[i]);
                }

            // Stop all FMOD events on the masterBus
            masterBus.stopAllEvents(FMOD.Studio.STOP_MODE.ALLOWFADEOUT);

            // To do: Release (destroy) all FMOD events
            
            // Clear list of postcards
            //Postcards.currentPostcards.Clear();
            
            // Return to Intro scene
            SceneManager.LoadScene("Intro");

            




        }
        

    }




}
