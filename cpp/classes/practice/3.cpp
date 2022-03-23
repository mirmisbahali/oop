#include <iostream>

class Triangle {
public:
    float side1;
    float side2;
    float side3;

    Triangle(float s1=0.0, float s2=0.0, float s3=0.0) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    void area() {
        float ar = (1.0/2.0)*side1*side2;
        std::cout << "Area: " << ar << std::endl;
    }
    void perimeter() {
        std::cout << "Perimeter: " << side1+side2+side3 << std::endl;
    }

};

int main(void) {
    Triangle rightAngleTr(3.0,4.0,5.0);
    rightAngleTr.area();
    rightAngleTr.perimeter();
    return 0;
}