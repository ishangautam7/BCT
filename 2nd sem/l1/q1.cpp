#include <iostream>
using namespace std;

struct complex{
    double r, i;
}n1, n2, s;

int display (complex s){
    cout<<endl<<"The sum is : "<<s.r << "+" << s.i << "i";
    return 0;
};

int add(complex n1, complex n2){
    s.r = n1.r + n2.r;
    s.i = n1.i + n2.i;
    return 0;
};

int main() {

    cout << "Enter the real and imaginary part of first number: ";
    cin >> n1.r >> n1.i;

    cout<<endl<<"Enter the real and imaginary part of second number: ";
    cin>> n2.r >> n2.i;

    add(n1, n2);
    display(s);

    return 0;
}

