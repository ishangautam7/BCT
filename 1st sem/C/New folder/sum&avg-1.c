#include<stdio.h>

int main(){
    int n, num[30], i, j;
    int sum, neg=0;
    float avg;
    printf("Enter the value of N\t");
    scanf("%d", &n);

    printf("\nEnter the values\n");
    for(i=0; i<n; ++i){
        scanf("%d", &num[i]);
        if(num[i]<0){
            i=n+8;
            neg = 1;
            break;
        }
    }

    for(i=0; i<n; i++){
        sum += num[i];
    }

    avg = ((float)sum/n)*1.0;

    if(neg == 0){
            printf("The sum is %d and average is %.2f", sum, avg);
    }

    return 0;
}
