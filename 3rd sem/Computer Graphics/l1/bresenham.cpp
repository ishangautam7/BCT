#include<stdio.h>
#include<graphics.h>
#include<cmath>
int main()
{
    int x1, y1, x2, y2, xinc, yinc, p, count=0, gd=DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    printf("Enter the initial and final co-ordinates respectively: ");
    scanf("%d%d%d%d",&x1, &y1, &x2, &y2);
    xinc=x2-x1;
    yinc=y2-y1;
    p=2*yinc - xinc;
    while(count<=abs(xinc))
    {
        if(p<0)
        {
            p=p + (2*yinc);
            putpixel(x1, y1, GREEN);
            x1+=1;
            count++;
        }
        else{
            p=p + 2*yinc -2*xinc;
            putpixel(x1, y1, GREEN);
            x1+=1;
            y1+=1;
            count++;
        }
    }
    getch();
    closegraph();
    return 0;
}