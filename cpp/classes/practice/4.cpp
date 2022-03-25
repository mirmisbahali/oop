#include<iostream>

class Triangle {
public:
    int s1, s2, s3;
    Triangle(int a, int b, int c) {
        double ar = (a*b) / 2.0;
        double pr = (a+b+c);
        std::cout << "Area: " << ar << std::endl;
        std::cout << "Perimeter: " << pr << std::endl;
    }
};
int main(void) {
    Triangle t1(3,4,5);

    return 0;
}