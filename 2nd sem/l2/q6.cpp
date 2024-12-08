// Task #6: Create a class distance with 2 data items as feet and inches. Create 2 objects of above
// class and display the data in meters after conversion. (one object takes user input and another
// should pass the value to get data.)

#include<iostream>
using namespace std;

class Distance{

        private:
            double feet;
            double inches;
        
        public:
            Distance(double feet, double inches): feet(feet), inches(inches){}

            double convert(){
                double meter = (feet * 12 + inches) * 0.0254;
                return meter;
            }

};

int main(){
    double x, y;
    

    cout << "Enter the distance in feet and inches: ";
    cin>>x>>y;
    Distance d1(x, y);

    Distance d2(5, 10);

    cout<< "Distance 1: " << d1.convert() << " meters" << endl;
    cout<< "Distance 2: " << d2.convert() << " meters" << endl;
    
    return 0;
}