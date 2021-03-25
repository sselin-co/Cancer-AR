# Progress

## Week 2
### [Video](https://youtu.be/5mpuyq1P8Jc)
- Demo running on Unity and iPad
### Tasks
- Got project set up on computer
- Exported ios Application

## Week 3
### [Video](https://youtu.be/3KN1oB8kbeg)
- Demo of pinch to scale, translating and rotating 
### Tasks
- Practice C#
- Familization with Code
- Added Get Set up Documentaion to README.md
- Enabled pinch to scale, translating and rotating X, Y, Z without using buttons

## Week 4
### [Report](https://docs.google.com/spreadsheets/d/1oHvlnuQTlxqtbbcI85ABXfpTD0oF3JDJh1-jKyA32jA/edit?usp=sharing)
- 3D Object Translation 
### Tasks
- Read Papers 

- Created Report based on Papers 

- Updated README with Build instructios for iOS

- Fixed minor bugs with pinch to scale, translating and rotating X, Y, Z without using buttons

  

## Week 5

- Reading Break --

## Week 6

### [Video](https://youtu.be/4e2-PGKc3qg)

- Demo of Touch Tap to Change Rotation Axis 

### Tasks

- Updated README Instructions + Common Issues 
- Researched alternatives approaches for detecting user Tap / Selection
- Attempted to implemented Tap / Selection of model detection
- Implemnted feature to detect user tap and chagne axis based on number of taps 

### Summary 

|        | Moving | Scaling | Rotating |
| :----: | :----: | :-----: | :------: |
| 1 Tap  |  Drag  |  Pinch  | X - Axis |
| 2 Taps |   -    |    -    | Y - Axis |
| 3 Taps |   -    |    -    | Z - Axis |

## Week 7

### [Video](https://youtu.be/V7BV4tLKR8U)

- Demo of New "Help" screen + new axis graphics 

### Tasks

- Refactored and added comments to existing code + optimized build time
- Fixed bug with background height not displaying full screen
- Updated README with xCode issue
- Created new "Help" page with hand gestures 
- Added "Help" page after model is selected
- Added Help button functionality to display "Help" page and hide page after pressing "OK"
- Replaced Axis status label with custom graphic X / Y / Z
- Researched Networking tools for multiplayer such as [Photon](https://www.photonengine.com/en/pun), [Mirror](https://mirror-networking.gitbook.io/docs/), [Magic Leap](https://www.pubnub.com/blog/multiplayer-augmented-reality-game-magic-leap-unity/?devrel_gh=Cube-Fight), Unity's default [Network Manger](https://medium.com/wolox/augmented-shared-reality-in-unity-b7f88ca98ec1)
- Attempted to implement Unity's default Network Manager + Photon with *some* success

## Week 8

### [Video](https://youtu.be/6KwZUTurl-k)

- Demo of New Multiplayer (Computer / Computer)

### Tasks

- Implemented Multiplayer feature using Photon / PUN 
- Investigated [Pricing for Photon](https://www.photonengine.com/en-US/PUN/Pricing) 
- Attempted to fix GPU issue on iOS builds 
- Updated X / Y / Z Colours, removed white background 
- Updated Help page -- renamed "Traslate" to "Move"

## Week 9

### [Video](https://youtu.be/R-CRFcSHDNM)

- Demo of Multiplayer (Computer / Mobile)

### Tasks

- Investigated crashing bug / GPU issue on iOS builds 
- Investigated connecting to Canadian Photon Servers (previously using USA servers)
- Re-implemented multiplayer feature 
- Updated Launch Screen
- Added Connection Status for User 
- Investigated bi-directional access to models (work in progress)

## Week 10

### [Video](https://youtu.be/mcXJDtWSYfc)

- Demo of Multiplayer with Bi-directional access

### Tasks

- Investigated solutions for removing platform for object detection
  - [8th Wall](https://www.8thwall.com/)
  - [Apple AR Kit](https://developer.apple.com/augmented-reality/)
  - [Andriod ARCore](https://developers.google.com/ar/develop/java/quickstart)
- Implemented bi-directional access to models 
- Implemented feature for 2+ users to join rooms
- Built + Published iOS & Andriod APKs from Week 9 (sent via email)