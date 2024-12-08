#include<iostream>
using namespace std;

float& average(const float &a, const float &b, const float &c, float &avg){
    avg = (a + b + c) / 3.0;
    return avg;
}

int main(){
    float n1 = 10, n2 = 20, n3 = 30;
    float avg = 0.0;
    float &vare = average(n1, n2, n3, avg);
    cout << "Average: "  << vare;
    return 0;
}

