# WIP
# The Meaningful Journey
ie TMJ
A basic cross-platform side-scrolling platformer written in C++ using SDL2. Designed to run on **Linux**, **Windows**, and **Android** (via SDL2 and NDK).

---

# Our Project Structure

TMJ/
|-- src/ # Game source code (.cpp, .h)
|-- assets/ # Images, sounds, fonts
|-- build/ # Output folders: linux/, windows/, android/
|-- platform/ # Platform-specific files (android/, windows/, macos/)
|-- include/ # Headers
|-- Makefile # Linux/Windows build script
|-- README.md

# Some build instructions
## For Linux (I am on Ubuntu)
sudo apt install build-essential libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev
make linux
## For Windows (I am on 11)
sudo apt install mingw-w64
make windows
## For Android
>some NDK stuff here<
## For macOS
... well we will get to that later

# Dependencies

[SDL2](https://libsdl.org)
[SDL2_image](https://www.libsdl.org/projects/SDL_image/)
[SDL2_mixer](https://www.libsdl.org/projects/SDL_mixer/)

# Credit
karismas
kixmococo
I'm not writing the rest bc I'm silly
~
