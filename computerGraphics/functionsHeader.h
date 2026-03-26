#ifndef FUNCTIONS_HEADER
#define FUNCTIONS_HEADER

#include "objectHeader.h"

//This will include function decleration for all headers
//

//calculate the corresponding point on the view port for a given pixel
//
Point canvasToViewPort(int x, int y, int d, int cw, int ch, int vw, int vh);


// The TraceRay method computes the intersection of the ray with every sphere and 
// returns the color of the sphere at the nearest intersection (The one closest to view port point) inside the requested range of t
int * TraceRay(const Point& origin, const Point& viewPortPoint, int t_min, int t_max);


//returns the corresponding t values of where the vector 0V (viewPortPoint) intersects given sphere
//
int * IntersectRaySphere(const Point& origin, const Point& viewPortPoint, const Sphere& sphere);

#endif