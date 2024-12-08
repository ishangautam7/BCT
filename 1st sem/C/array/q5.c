#include<stdio.h>

int power(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a * power(a, b-1);
    }
}

int main(){
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);

    int ans = power(a,b);
    printf("The power is %d", ans);
    return;
}
