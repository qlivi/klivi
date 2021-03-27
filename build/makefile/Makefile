build_ffi: install
	g++ src/window.cpp -shared -o cpplib.so -lglfw -lGLEW -framework OpenGL

install: setup
	brew update && brew install glfw3 && brew install glew

setup:
	echo setup
