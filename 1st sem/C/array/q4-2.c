#include<stdio.h>

check(int p, int q, int n1, int n2){
    int i, sum=0;
    for(i=n1; i<=n2; i++){
        if(i%2==0 && i%p==0 && i%q!=0){
            sum+=i;
            printf("%d\n", i);
        }
    }
    printf("The sum for given condition is %d", sum);
}


int main(){
    int p = 3, q=5,n1, n2;
    printf("Enter the lower limit of range\n");
    scanf("%d", &n1);
    printf("Enter the upper limit of range\n");
    scanf("%d", &n2);
    printf("Enter p");
    scanf("%d", &p);
    printf("Enter q");
    scanf("%d", &q);
    if(n2>n1){
        check(p,q,n1,n2);
    }

    return;
}