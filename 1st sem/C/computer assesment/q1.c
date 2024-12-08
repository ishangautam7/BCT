#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, length, digit;
    int sum = 0;
    int next;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("The sum is %d", sum);

    int q = sum;

    int j = 2;

    if(q==0 || q==1){
        next = 0;
        printf("The number is neither prime nor composite");
    }
start:
    if(q % j == 0)
    {
        printf("The number %d is not prime.\n", q);
        goto end;
    }
    if(j <= sqrt(q))
    {
        j++;
        goto start;
    }
    printf("The number %d is prime.\n", q);
end:
        if (next == 0)
    {

        int a = 0, b = 1, c, i = 2;
        if (q == 0)
        {
            printf("The %dth term of the fibonacci series is %d", q, a);
        }
        else if (q == 1)
        {
            printf("The %dth term of the fibonacci series is %d", q, b);
        }
        else
        {
            while (i <= q - 1)
            {
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            printf("The %d th term of the fibonacci series is %d", q, c);
        }
    }

    else if (next == 1)
    {
        int a = 0, b = 1, c, i = 2;
        if (q == 0)
        {
            printf("The %dth term of the fibonacci series is %d", q, a);
        }
        else if (q == 1)
        {
            printf("The %dth term of the fibonacci series is %d", q, b);
        }
        else
        {
            while (i <= q - 1)
            {
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            printf("The %d th term of the fibonacci series is %d", q, c);
        }
    }
    else if (next == 2)
    {
        int a = 0, b = 1, c, i = 2;
        if (q == 0)
        {
            printf("The %dth term of the fibonacci series is %d", q, a);
        }
        else if (q == 1)
        {
            printf("The %dth term of the fibonacci series is %d", q, b);
        }
        else
        {
            while (i <= q - 1)
            {
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            printf("The %d th term of the fibonacci series is %d", q, c);
        }
    }
