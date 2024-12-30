#include <graphics.h>
#include <stdlib.h>
#include<iostream>

void draw_circle(int xc, int yc, int x, int y){
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void midpoint_circle(int r, int xc, int yc){
    int x=0, y = r, p=1-r;

    draw_circle(xc, yc, x, y);
    while(x<y){
        x++;
        if(p<0){
            p += 2*x + 1;
        }else{
            y--;
            p += 2*(x-y)+1;
        }
        draw_circle(xc, yc, x, y);
        delay(100);
    }
}

int main(){
    int r, xc, yc, gd=DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    printf("Enter the radius of circle");
    scanf("%d", &r);

    printf("Enter the center of circle");
    scanf("%d%d", &xc, &yc);
    
    midpoint_circle(r, xc, yc);

    getch();
    return 0;
}