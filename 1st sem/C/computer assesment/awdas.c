#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(sum>9 || num!=0){             
        if(num==0){
            num = sum;
            sum = 0;
        }
        int digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }

    printf("%d", sum);

    return 0;
}