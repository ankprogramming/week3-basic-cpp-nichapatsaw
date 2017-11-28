#include <iostream>

using namespace std;

int main() {

    const float pi = 3.14315926536;
    float r;
    float area;
    float e = 2;
    float q = 15;

    cout << "Please enter radius : ";
    cin >> r;
    area = pi * r * r;
    cout << "Area of circle : "<< area << endl;

    cout << "Circumference : "<< e * pi * r<< endl;

    cout << "Cylinder height 15 : "<< pi * (r*r) * q<< endl;

  return 0;
}
