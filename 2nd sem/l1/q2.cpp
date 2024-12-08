#include <iostream>
using namespace std;

inline float calculateBMI(float weight, float height){
    return weight / (height * height);
}

int main(){

    //inline function to calculate bmi

    float weight, height, bmi;

    cout << "Enter your weight in kg: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = calculateBMI(weight, height);

    cout << "Your BMI is: " << bmi;

    return 0;
}
