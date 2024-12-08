#include<stdio.h>

int main(){
    char c;
    float price, sell_Price=0;
    float tax;
    printf("Type n for national product\t\n");
    printf("Type i for international product\t\n");
    scanf("%c", &c);
    printf("Enter the price of the product");
    scanf("%f", &price);

    switch (c)
    {
    case 'n':
        tax = .08;
        break;
    
    case 'i':
        tax = .18;
        break;

    default:
        break;
    }

    sell_Price = price + tax*price;

    printf("Your paying amount after tax is %.2f", sell_Price);
    return 0;
}