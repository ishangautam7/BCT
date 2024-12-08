#include<iostream>
using namespace std;

void swapbyRefrence(int a, int b){
    int temp = a;
    b = a;
    a = temp;
}

void swapbyPointer(int *a, int *b){
    int temp = *a;
    *b = *a;
    *a = temp;
}

int main(){
    int a = 10, b = 20;

    cout << "Before Swapping" << endl;
    cout<< "a: " << a << " b: " << b << endl;

    swapbyRefrence(a, b);
    cout << "After Swapping by Refrence" << endl;
    cout<< "a: " << a << " b: " << b << endl;

    swapbyPointer(&a, &b);
    cout << "After Swapping by Pointer" << endl;
    cout<< "a: " << a << " b: " << b << endl;
    return 0;
}