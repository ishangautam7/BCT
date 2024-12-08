#include<stdio.h>

int main(){
    int n, i=0;
    int p=3, q=5;
    int sum =0;
    printf("Enter n: ");
    scanf("%d", &n);

    while(i<=n){
        if(i%2==0 && n%p==0 && n%q!=0){
            sum+=i;
        }
        i+=2;
    }

    printf("\nThe sum is %d", sum);
    return 0;
}