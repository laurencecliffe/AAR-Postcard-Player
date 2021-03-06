# AAR Postcard Player

Audio Augmented Reality (AAR) Postcard Player. A cross-platform Unity project for building an image recognition and tracking AR mobile app for playing back dynamic binaural audio content associated with physical, printed images.

## Required tools and plugins:

* Unity Editor 2020.3.9f1
* ARFoundation 4.1.7 (Unity Plugin)
* FMOD Studio Integration 2.00.10 (Unity Plugin)
* ARCore XR 4.1.7 (Unity Plugin for Android build)
* ARKit XR Plugin 4.1.7 (Unity Plugin for iOS build)
* Xcode (for iOS build)
* FMOD Studio (for the creation of binural audio sources with ResonanceAudio)
* An iPhone SE (1st edition) or later and/or an ARCore compatible Android device (see: https://developers.google.com/ar/devices)

Other software and plugin versions may work, but the above configuration has been tested on both iOS and Android.

FMOD Studio and FMOD events are only required in order to use ResonanceAudio (which comes packaged with FMIOD Studio) as the binaural spatialisation plugin within Unity. If you have another binural audio spatilaiser plugin, such as DearVR, or you do not require binaural audio, you can skip FMOD and use normal Unity audio sources. Unless of course you want to use FMOD to script addtional audio interactions based on, for example, the distance between the listener and the tracked image.

## Getting up and running:

1. Follow this guide for creating binaurally rendered audio sources in FMOD Studio with ResonanceAudio and integrating them into the Unity project: https://alessandrofama.com/tutorials/fmod-unity/resonance-audio-setup/
2. Set the attenuation curves, max distance and other parameters for your FMOD Events with the ResonanceAudio Source controls within FMOD Studio.
3. Integrate your FMOD Studio project with the Unity project
4. Replace the images with the ones you want to augment in Assets/Prefabs/Reference Image Library (XR Reference Image Library) and specify their sizes (this is important for calculating the distances between the images and the listener) Check the ARKit and ARCore documentation for advice on choosing the best types of images to track - you'll get a build error if your images do not have enough 'key points' or your app will have trouble tracking your images.
5. Print your images at the sizes you have specified
6. Modify the Prefab FMOD Studio Event Emitter components to play your FMOD Studio Project Events (these are the prefabs that wil be instantiated when the application sucessfully recognises the image with which it is associated).
7. Modify the Prefab Postcard Name and Postcard Description
8. Associate your Prefabs with the tracked images in the Image tracking script component on the AR Session Origin. (your prefabs must have the same name as the images with which they are associated).
9. You can adjust the settings on the FmodResonanceAudioRoom component attached to the AR Camera to best match the acoustics of your real (or virtual) deployment environment.
10. Build out to Android and/or iOS
11. iOS builds will need to modify Libraries/Plugins/FMOD/src/Runtime/fmodplugins.cpp as instructed within the file, otherwise you'll be met with silence... (you'll need to do this each time you build)
