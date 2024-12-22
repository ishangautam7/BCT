#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
int main(){

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x1, x2, y1, y2;
    printf("Enter the first coordinate");
    scanf("%d%d", &x1, &y1);
    printf("Enter the first coordinate");
    scanf("%d%d", &x2, &y2);
    int dx = abs(x2-x1);
    int dy = abs(y2-y1);
    int steps = (dx>dy)?dx:dy;
    float inx = dx/(float)steps;
    float iny = dy/(float)steps;
    float x = x1, y=y1;
    putpixel(x, y, RED);
    for (int i=0; i< steps; i++){
        x+=inx;
        y+=iny;
        putpixel(x, y, GREEN);
        delay(100);
    }
}