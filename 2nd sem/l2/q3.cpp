// WAP with function that takes two arguments as reference. The function returns
// reference argument which is of greater value so that it can be assigned specific value (say 500)
// when function is being invoked.

#include<iostream>
using namespace std;

int &greaterValue(int &a, int &b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int a = 20, b = 40;
    cout << "a: " << a << " b: " << b << endl;
    int n = greaterValue(a, b) = 500;
    cout << "a: " << a << " b: " << b << endl;
}