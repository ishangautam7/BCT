#include<stdio.h>

int fibo(n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int fib = fibo(n);
    printf("The %dth term of fibonacci series is %d", n, fib);
    return;
}