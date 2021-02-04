# CancerAR - UBC Cancer VR/AR Mobile Applicaiton 
A repository for a Cancer Nodules Visualization App. Currently supporting lungs and kidneys. 

## Contributors 
- [@brandongk](https://github.com/brandongk-ubco) 
- [@danbugs](https://github.com/danbugs)


## Get Started

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



## Common Errors and Fixes

### Visual Studio
Some errors that you may come across while working on Visual Studio: 
```
The type or namespace "UnityEngine" could not be found - Can not edit scripts
```
You can regenerate the Visual Studio project files by deleting the `.csproj` and `.sln` files from your Unity project folder. Open any script in your project through the Unity Editor and Unity will recreate the files. 

You can also use `Assets - Open C# Project` through Unity's menu bar.

If your issue is not fixed, look in the folder `Library\UnityAssemblies` in your project directory. The Unity libraries including UnityEngine.dll should be there. If not then you can copy them from another project's folder. You can also try to delete the whole Library folder when the project is not open and let Unity regenerate it.
