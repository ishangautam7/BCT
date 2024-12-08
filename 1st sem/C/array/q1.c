#include<stdio.h>
int main(){

    int n, sum_p=0, sum_s=0;
    int pal;

    printf("Enter the order of matrix\n");
    scanf("%d", &n);
    int matrix[n][n];
    printf("\n Enter the elements\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        sum_p += matrix[i][i];
        sum_s += matrix[i][n-1-i];
    }
    

    printf("\n The primary sum is %d", sum_p);
    printf("\n The secondary sum is %d", sum_s);

    int news = sum_p + sum_s;
    while(news!=0)
    {
        int rem = news % 10;
        pal = pal * 10 + rem;
        news/=10;
    }

    if(pal == sum_p + sum_s){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}