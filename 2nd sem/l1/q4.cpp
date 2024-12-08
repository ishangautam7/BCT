#include <iostream>
using namespace std;

inline int square(int a){
    return a*a;
}

inline float square(float a){
    return a*a;
}

inline double square(double a){
    return a*a;
}

int main(){
    int a;
    float b;
    double c;

    cout << "Enter an integer: ";
    cin >> a;
    cout<<endl<<square(a)<<endl;

    cout << "Enter a float: ";
    cin >> b;
    cout<<endl<<square(b)<<endl;

    cout << "Enter a double: ";
    cin >> c;
    cout<<endl<<square(c)<<endl;

}