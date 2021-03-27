@echo off
brew update && brew install glfw3 && brew install glew
g++ src/window.cpp -shared -o cpplib.so -lglfw -lGLEW -framework OpenGL
