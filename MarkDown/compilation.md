# compilation

```bash
g++ -c -Wall -Werror -fpic main.cpp
```

```bash
g++ file -shared -o cpplib.so -lglfw -lGLEW -framework OpenGL
```

```bash
gcc -shared -o cpplib.so main.o
```
