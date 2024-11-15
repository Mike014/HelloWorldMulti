# HelloWorldMulti

## Overview
HelloWorldMulti is a multi-platform project that supports both Windows and Android. This guide will help you set up and run the project on both platforms.

## Windows Setup

### Prerequisites
- **Windows OS**
- **Visual Studio** with C++ development tools
- **CMake** (version 3.22 or higher)

### Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/Mike014/HelloWorldMulti.git
   cd HelloWorldMulti

2. Generate the Visual Studio solution:
   ```sh
   mkdir build
   cd build
   cmake .. -G "Visual Studio 16 2019"

3. Open the generated .sln file in Visual Studio and build the project.

4. Run the project from Visual Studio or simply click on the .exe file located at Builds/VisualStudio2022/x64/Release/App.

## Android Setup

### Prerequisites
- **Android Studio**
- **Android NDK** with C++ development tools
- **CMake** (version 3.31.0 or higher)

### Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/Mike014/HelloWorldMulti.git
   cd HelloWorldMulti

2. Open Android Studio and select **Open an existing project**.

3. Navigate to the **HelloWorldMulti** directory and open it.

4. Let Android Studio download and configure the necessary dependencies.

5. Connect your Android device or start an emulator.

6. Build and run the project from Android Studio.

## Usage
- **Window:** Run the executable generated by Visual Studio or the .exe file in the **Builds/VisualStudio2022/x64/Release/App** folder.
- **Android:** The app will launch on your connected device or emulator

## Running via JUCE
# Windows 
- Open the project in **Projucer** (JUCE’s project manager).
- Once open in Projucer, click on Open in IDE to load the project in Visual Studio.
- Start the project from Visual Studio to compile and launch the application.
# Android 
- Open the project in **Projucer**.
- Add an Android exporter within Projucer if not already present.
- Once configured, you can export the project to Android Studio using this exporter.
- Run the project from **Android Studio** to see the app running on a connected device or emulator.

