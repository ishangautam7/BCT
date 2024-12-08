#include<stdio.h>


int main(){
    float units, rate;

    printf("Enter the number of units consumed");
    scanf("%f", &units);

    if (units>=0 && units<=100)
    {
        rate = 0.5 * units;
    }
    else if(units>100 && units <=200){
        rate = 100 +(0.65*units);
    }
    else if(units<200 && units <=300){
        rate = 230 + (0.80*units);
    }
    else if(units>300){
        rate = 390 + units;
    }
    else{
        printf("\n Invalid Case");
    }

    printf("The amount to be paid is %.2f", rate);
    return 0;
}
