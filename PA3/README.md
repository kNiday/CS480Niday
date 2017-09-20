# PA3: Moons

Developed by Katherine Niday using code provided by Fred Harris

## Compilation
This project was compiled using CMake. Thus, compilation can be accomplished as shown:
```bash
cd build
cmake ..
make
```

### Running
Command line arguments must be used to run the code in order to give the program the correct shader file names. As it is being used here, the program can be run with the following commands:

```bash
cd build
./Tutorial -f shaders/fragmentShader.frag -v shaders/vertexShader.vert
```
Note that the fragment and vertex shader file names can be switched as long as they are preceded by the -f and -v arguments, respectively, and different files or file paths could be used if necessary.

#### Keyboard Inputs
Press SPACEBAR to pause the planet completely. This does not toggle; a different key must be pressed to get the system moving again.

Press the RIGHT AND LEFT ARROW KEYS to change the direction of the planet. The RIGHT ARROW KEY moves the planet in the initial direction (i.e. counterclockwise) while the LEFT ARROW KEY moves it in the opposite direction. (i.e. clockwise).
