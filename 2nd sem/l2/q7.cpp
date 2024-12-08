// WAP to create a class “Shape” and calculate the area of rectangle, square and circle
// and display the result as well.

#include<iostream>
using namespace std;

class Shape{
    public:
        float area(float a, float b){
            return a * b;
        }
        double area(double l){
            return l * l;
        }
        double area(float r){
            return 3.14 * r * r;
        }
};

int main(){
    Shape rect, square, circle;
    float r = 10;
    double l = 10;
    cout << "Area of Rectangle: " << rect.area(10, 20) << endl;
    cout << "Area of Square: " << square.area(l) << endl;
    cout << "Area of Circle: " << circle.area(r) << endl;
}