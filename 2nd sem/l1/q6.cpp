#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int *ptr = new int;
    cout<<"Enter the value of n: ";
    cin>>*ptr;

    int *arr = new int[*ptr];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<*ptr; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int avg = sum / *ptr;

    cout<<"The sum of the elements of the array is: "<<sum<<endl;
    cout<<"The average of the elements of the array is: "<<avg<<endl;

    delete ptr;
    delete[] arr;

    return 0;
}