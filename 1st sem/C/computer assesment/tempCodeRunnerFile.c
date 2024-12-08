#include <stdio.h>
int main()
{

    int n1 = 10, n2 = 1000;
    
    for(int i=n1; i<=n2; i++)
    {
        int isPrime = 0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                isPrime = 1;
                break;
            }
        }
        if(isPrime==0){
            printf("%d\n", i);
        }
    }
    return 0;
}