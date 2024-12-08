#include<iostream>
using namespace std;

inline double calculateFee(double t, double tr = 0, double lunch =0){
    return t + tr + lunch;
}

int main(){

    cout<<"Primary School fee: "<<calculateFee(5000, 2000, 3000)<<endl;
    cout<<"Middle School fee: "<<calculateFee(8000, 3000, 3000)<<endl;
    cout<<"High School fee: "<<calculateFee(10000, 3000)<<endl;

    return 0;
}