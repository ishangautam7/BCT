#include<stdio.h>
#include<conio.h>

int main(){
    float gpa;
    char res[100]; // Array to store the result message

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    if(gpa <= 4 && gpa >= 2.8){
        strcpy(res, "You can get admission in all faculty");
    }
    else if(gpa <= 2.8 && gpa >= 2){
        strcpy(res, "You can get admission in Management and Humanities only");
    }
    else if(gpa >= 0 && gpa < 2){
        strcpy(res, "You cannot get admission in our college");
    }
    else{
        strcpy(res, "INVALID INPUT");
    }

    printf("%s", res);

    getch();
