#include <graphics.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

void ellipse(int cx, int cy, int rx, int ry){
    int x = 0, y = ry;
    int rxSq = rx * rx;
    int rySq = ry * ry;

    float p1 = rySq - (rxSq * ry) + (0.25 * rxSq);

    while ((2 * rySq * x) < (2 * rxSq * y)) {
        putpixel(cx + x, cy + y, WHITE);
        putpixel(cx - x, cy + y, WHITE);
        putpixel(cx + x, cy - y, WHITE);
        putpixel(cx - x, cy - y, WHITE);
    
    if(p1 < 0){
            x = x + 1;
            y = y;
            p1 = p1 + 2 * rySq * x + rySq;
    }else{
            x = x+1;
            y = y-1;
            p1 = p1 + 2*rySq*x + rySq - 2* rxSq * y;
    }
}

    float p2 = rySq * std::pow(x + 0.5, 2) + rxSq * std::pow(y - 1, 2) - (rxSq * rySq);
    while (y >= 0) {
        putpixel(cx + x, cy + y, WHITE);
        putpixel(cx - x, cy + y, WHITE);
        putpixel(cx + x, cy - y, WHITE);
        putpixel(cx - x, cy - y, WHITE);

        if (p2 > 0) {
            y--;
            p2 -= 2 * rxSq * y + rxSq;
        } else {
            x++;
            y--;
            p2 += 2 * rySq * x - 2 * rxSq * y + rxSq;
        }
    }
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*)"");
    int cx=100, cy=100, rx=50, ry=70;

    std::cout << "Enter the center points of the ellipse (cx, cy): ";
    std::cin >> cx >> cy;
    std::cout << "Enter the x and y radii of the ellipse (rx, ry): ";
    std::cin >> rx >> ry;

    ellipse(cx, cy, rx, ry);

    getch();
    return 0;
}