#include <stdio.h>

check()
{
    int i, sum = 0;
    int p = 3, q = 5, n1, n2;
    printf("Enter the lower limit of range\n");
    scanf("%d", &n1);
    printf("Enter the upper limit of range\n");
    scanf("%d", &n2);
    printf("Enter p");
    scanf("%d", &p);
    printf("Enter q");
    scanf("%d", &q);
    for (i = n1; i <= n2; i++)
    {
        if (i % 2 == 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
            printf("%d\n", i); 
        }
    }
    return sum;
}

int main()
{
    int sum = check();
    printf("The sum is %d", sum);
    return;
}