# Seven GUIs

My [JUCE](https://github.com/juce-framework/JUCE) implementation of the [7GUIs](https://eugenkiss.github.io/7guis/) GUI programming benchmark.

## Instructions

* Update the git submodules `git submodule update --init --recursive`
* Change the name of the desired GUI in the `src/Main.cpp` file
* Create a build directory, and navigate to it `mkdir build && cd build`
* Generate the build system: `cmake ..`. Optionally, add the `-DCMAKE_BUILD_TYPE=<value>` flag (useful values are Debug and Release)
* Build the executable: `cmake --build .`
* CMake will output the path to the created executable

## Todo

* make a splash screen to let the user choose the application they want
