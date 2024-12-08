#include <stdio.h>
#include<conio.h>
int main()
{
    // Write C code here

    float price;
    float tax, totalprice;
    char type;
    printf("enter the price\n");
    scanf("%f", &price);
    printf("enter the item type\n G for grocery\n C for cosmetics\nW for clothing\nL for liquor\n");
    scanf(" %c", &type);

    switch (type)
    {
    case 'G':
        tax = 0.08 * price;
        break;
    case 'C':
        tax = 0.1 * price;
        break;
    case 'W':
        tax = 0.12 * price;
        break;
    case 'L':
        tax = 0.18 * price;
        break;
    default:
        printf("FOOL\n");
        break;
    }

    totalprice = tax + price;
    printf("your price= %.2f", totalprice);

    return 0;
}
