#include <iostream>
using namespace std;

inline double calculatePerimeter(float r){
    return 3.14 * 2 * r;
}

inline double calculatePerimeter(double l, double b){
    return 2*(l + b);
}

inline double calculatePerimeter(double a, double b, double c){
    return a + b + c;
}

int main(){
    float r;
    double l, b, circlePerimater, rectanglePerimeter, trianlePerimeter, s1, s2, s3;

    cout << "Enter the radius of the circle: ";
    cin >> r;
    circlePerimater = calculatePerimeter(r);
    cout<< endl<< "The area of the circle is: "<< circlePerimater<<endl;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout <<endl<< "Enter the breadth of the rectangle: ";
    cin >> b;
    rectanglePerimeter = calculatePerimeter(l, b);
    cout<<endl<<"The area of the rectangle is: "<< rectanglePerimeter<<endl;

    cout<<"Enter the sides of the triangle: ";
    cin >> s1 >> s2 >> s3;
    trianlePerimeter = calculatePerimeter(s1, s2, s3);
    cout<<endl<<"The area of the triangle is: "<< trianlePerimeter<<endl;

    return 0;
}