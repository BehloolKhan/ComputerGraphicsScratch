#ifndef OBJECT_HEADER
#define OBJECT_HEADER
struct Sphere {

    int center[3] {};
    int radius;
    int color[3] {};
};

struct Scene {

    Sphere spheres[3] {};
    int origin [3] {};
};

class Point {

    private:

        int x {}; //default all to 0
        int y {};
        int z {};
    
    public:
        Point(int x_, int y_, int z_) {
            this->x = x_;
            this->y = y_;
            this->z = z_;
        }

        Point(int x_, int y_) {

            this->x = x_;
            this->y = y_;
        }

        Point add(const Point& point)
    
}
#endif