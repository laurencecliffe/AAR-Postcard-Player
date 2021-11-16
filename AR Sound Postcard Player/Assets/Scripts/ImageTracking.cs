using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;


[RequireComponent(typeof(ARTrackedImageManager))]

public class ImageTracking : MonoBehaviour

{
    [SerializeField]
    private GameObject[] placeablePrefabs;
    private Dictionary<string, GameObject> spawnedPrefabs = new Dictionary<string, GameObject>();
    private ARTrackedImageManager trackedImageManager;
    
    
    private void Awake() 
    {
	    
	   trackedImageManager = FindObjectOfType<ARTrackedImageManager>();
	   
	   foreach(GameObject prefab in placeablePrefabs) 
	   {
		   
		   GameObject newPrefab = Instantiate(prefab, Vector3.zero, Quaternion.identity);
		   
		   newPrefab.name = prefab.name;

		   newPrefab.SetActive(false);
		   
		   spawnedPrefabs.Add(prefab.name, newPrefab);  
		   
	   }

	  
	    
	}
    
    private void OnEnable() 
    {
	    
	    trackedImageManager.trackedImagesChanged += ImageChanged;
	     
    }
    
    private void OnDisable() 
    {
	    
	    //spawnedPrefabs.Clear();
	    
	    trackedImageManager.trackedImagesChanged -= ImageChanged;
	    
    }
    
    private void ImageChanged(ARTrackedImagesChangedEventArgs eventArgs) 
    {
	    
	    foreach(ARTrackedImage trackedImage in eventArgs.added) 
	    {
		    
		    UpdateImage(trackedImage);
		    
	    }
	    
	    foreach(ARTrackedImage trackedImage in eventArgs.updated) 
	    {
		    
		    UpdateImage(trackedImage);
		    
	    }
	    
	     foreach(ARTrackedImage trackedImage in eventArgs.removed) 
	     {
		    
		    // remove prefab based on trackedImage.trackingState, rather than removed. (if it cant see the image where it used to be then remove it?
		    // https://github.com/Unity-Technologies/arfoundation-samples/issues/439
		    
		    //spawnedPrefabs[trackedImage.name].SetActive(false);
		    
	    }
	    
	    
    }
    
     private void UpdateImage(ARTrackedImage trackedImage) 
     {
	     
	     string name = trackedImage.referenceImage.name;
	     Vector3 position = trackedImage.transform.position;
	     
	     GameObject prefab = spawnedPrefabs[name];
	     prefab.transform.position = position;
	     prefab.SetActive(true);
	     
	     foreach(GameObject go in spawnedPrefabs.Values) 
	     {
		     
		     if(go.name != name) {
			     
			     //go.SetActive(false);
			     
		     }
		     
	     }
	     
	     
     }
     
     
     
     
     
 }
 
 
    
