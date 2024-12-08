#include<stdio.h>

int main(){
    int n, i=0;
    int p=3, q=5;
    int sum =0;
    printf("Enter n: ");
    scanf("%d", &n);

    do{
            if(i%2==0 && i%p == 0 && i%q!=0){
                sum += i;
            }
            i++;

    }
    while(i<=n);


    printf("\nThe sum is %d", sum);
    return 0;
}
