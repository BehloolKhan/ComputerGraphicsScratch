//This will be the main file
//It will be the objects we need
//

#include "objectHeader.h"
#include <iostream>
#include <fstream>
#include <cstdlib>


int main () {

    //establish all objects and constants we need
    //
    int view_port_size[2] = {1, 1};
    int projection_plane_d = 1;

    Sphere Red;
    Sphere Green;
    Sphere Blue;

    Scene scene;

    //intialise all objects

    Red.center = {0, -1, 3};
    Red.radius = 1;
    Red.color = {255, 0, 0};

    Blue.center = {2, 0, 4};
    Red.radius = 1;
    Red.color = {0, 0, 255};

    Green.center = {-2, 0, 4};
    Red.radius = 1;
    Red.color = {0, 255, 0};

    scene.spheres = {Red, Blue, Green};
    scene.origin = {0, 0, 0};

}