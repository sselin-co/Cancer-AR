# CancerAR - Augmented Reality Mobile Application for Remote Collaboration
An augmented reality mobile application with real time collaboration between 2 people on a 3D model (lungs/kidnesy)

![Unity Install](README%20Pictures/AppScreenshot.png)

## Video Demos

- [3D Manipulation / Controls](https://youtu.be/1dBkyXCBECE)
- [Multiplayer Feature](https://youtu.be/DuOQn5LT-lE)
- [Built-in Annotation](https://youtu.be/QMWRvGZOz6U)

## UBC Undergraduate Research Conference 2021

- [Presentation Slides](https://docs.google.com/presentation/d/1JMx8Nug02lwTFF46jchHaxJ9A-GyYxYcgL78YryCNQw/edit?usp=sharing)

## Contributors 

- [@parsa-rajabi](https://github.com/Parsa-Rajabi) 
- [@brandongk](https://github.com/brandongk-ubco) 
- [@danbugs](https://github.com/danbugs)


## Get Started

### Download and Print off Target Image
Vuforia's target image - [Download Link](https://vuforialibrarycontent.vuforia.com/Images/example_5-star_grayscale.jpg)

### Install Unity Hub
1. Download [Unity Hub](https://store.unity.com/#plans-individual) (this application will be used to download/install Unity later) 
2. Create a Free Unity Account 
### Install Unity 
1. Open Unity Hub after installation and Navigate to "Installs" tab on the left
![Unity Hub](https://docs.unity3d.com/uploads/Main/gs_hub_installs_screen.png)
2. Click "Add"
3. Click [Download Archive](https://unity3d.com/get-unity/download/archive)
4. Select **Unity 2019.1.1** (this project is based on this version of unity)
5. From the module list, make sure the following are selected:
- Android Build Support**
- iOS Build Support**
- Vuforio Augmented Reality Support

** **Note:** You may need to install additional software to support either mobile platforms.


![Unity Install](README%20Pictures/Installing_Unity.png)

6. Click "Install"

### Install Unity's Code Editor 

At some point you will need to edit code. To do so, you will need access to Microsoft's Visual Studio. 

Please note that this is **NOT** *Visual Studio Code* which is the Blue icon. Instead, its called **Visual Studio** and it has a Purple icon. 

You can download it from [their website](https://visualstudio.microsoft.com/)
### Mobile Application Software
Depending on which mobile application you want to export to, you will need to install the software associated with it. 

For iOS, you will need **xCode** which can be found in MacOS's App Store

For Android, you will need **Android Studios** which  you can download from [their website](https://developer.android.com/studio)


### Open Project 
1. Open Unity Hub 
2. Navigate to "Projects" tab on the left
3. Click "Add"
4. Navigate to the project folder on your computer and open the **Unity** folder
5. Once the unity folder has been added to your Unity Hub, click on the project to open it (Note: this will take awhile since Unity needs to a lot configurations in the background)


## Run Project 
1. Find the "Project" tab in Unity's Sidebar on the left
2. Navigate to the **gameplay** scene by:
 - Assets > Scene 
 3. Open the scene by double clicking on it 
 4. Click the play button at the top of the Unity

***Note**: You may get a pop-up that says you need install some additional assets, follow the prompts and re-run the project by clicking on the play button.* 

# Build Application 

You can follow the steps below to build and export the project 

1. Open Project
2. From Unity's top menu, select File > Build Settings
3. Under platform section, select the platform you wish to create the build for
4. Once you have selected the platform, ensure the build settings are accurate on the right hand side
5. Click "Switch Platforms"
6. Click "Build" or "Build And Run" 


## iOS
1. Open project in xCode
- If you selected "Build and Run", your xCode should automaically open up (may take awhile to open up for the first time). 
- If you selected "Build", navigate to where you saved the build package and click on the `.xcodeproj` file to open the project in xCode.
2. Once the project has loaded you have to update/fix a few things before being able to build the application:
     1. Under "TARGETS" section on the left hand side, select "Unity-iPhone" 
     2. From the upper menu, select "Signing & Capabilities" (beside General)
     3. From the sub-menu, select "All" 
     4. In this section: 
          1. Ensure you have "Automically mange signing" ✅
          2. Ensure you have a "Team" selected (you may need to sign in to your Apple ID [developer account]) 
          3. Ensure you have a "Bundle Identifier", this may already be pre-populated with a value but make sure it follows this format: `com.[text].[text]`     
          4. Ensure you have a "Signing Certificate" (you may need to sign in to your Apple ID [developer account])

![xCode Settings](README%20Pictures/xCode_Settings.png)

3. Once you have completed all the tasks above, connect an iOS device to your computer
4. Press the ▶️  button on the top 
5. Wait for build to complete 
6. The application should appear on your phone 
7. If this is the first time you are deploying an application from you computer to your device, your iOS device will block the installization of the app due to privacy and security - Refer to Common Errors and Fixes below for a solution


# Common Errors and Fixes

### xCode

#### Untrusted Developer 

![Untrusted Developer](README%20Pictures/Untrusted_Dev.png)

- Follow these steps to fix:
     1. Go on your iOS device 
     2. Open Settings > General
     3. Profiles (you won’t see this until after the first profile is installed on an iOS device)
     4. Choose the affected profile and trust it

- An alternative to fix: 
     1. Open Xcode app on your Mac
     2. Navigate to Window > Devices 
     3. Right click on your device > "Show Provisioning Profiles..." > and delete the profiles 
     4. Delete the installed app on your device 
     5. Now rebuild and install the app again 
     
- In case neither of those options work, Apple may have updated iOS and the `Profiles & Device Management` section has moved. In that case, refer to their documentation to locate that section.

#### Invalid Code Signiture 

![Invalid Code Sig](README%20Pictures/InvalidCodeSig.png)



- The problem is that the developer is not trusted on the device. If you manually try to run the apps on the device, you will see an Untrusted Developer message.

  To solve this issue on the device, go to `Settings > General > Device Management`, depending on the device type and the iOS version. There, trust the developer and allow the apps to be run.

#### Errors were encountered while preparing your device for development `<none>`

![Invalid Code Sig](README%20Pictures/none_error.png)

Perform the following steps in this order:

1. Delete the app from the device
2. Clean the Build Folder with: ⌘ + shift + K
3. Disconnect device
4. Restart device 

--- at this point you should try `re-building and re-installing`. If you're still running into the issue continue with the following steps:

5. Unpair device (from ⌘ + shift + 2 window)
6. Restart Computer 
7. Re-pair device 
8. `Re-build and re-install`

### Visual Studio

```
The type or namespace "UnityEngine" could not be found - Can not edit scripts
```
You can regenerate the Visual Studio project files by deleting the `.csproj` and `.sln` files from your Unity project folder. Open any script in your project through the Unity Editor and Unity will recreate the files. 

You can also use `Assets - Open C# Project` through Unity's menu bar.

If your issue is not fixed, look in the folder `Library\UnityAssemblies` in your project directory. The Unity libraries including UnityEngine.dll should be there. If not then you can copy them from another project's folder. You can also try to delete the whole Library folder when the project is not open and let Unity regenerate it.