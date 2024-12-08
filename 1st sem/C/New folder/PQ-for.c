#include<stdio.h>

int main(){
    int n, i;
    int p=3, q=5;
    int sum =0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(i%2==0){
            if(i%p == 0 && i%q!=0){
                sum += i;
            }
        }
    }

    printf("\nThe sum is %d", sum);
    return 0;
}