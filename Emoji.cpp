#include<graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
	initgraph(&gd,&gm," ");

        setcolor(YELLOW);
	    circle(300,150,150);
	    setfillstyle(SOLID_FILL,YELLOW);
        floodfill(301,151,YELLOW);

        setcolor(BLACK);
        circle(245,120,20);
	    setfillstyle(SOLID_FILL,BLACK);
        floodfill(246,121,BLACK);

        setcolor(BLACK);
        circle(350,120,20);
	    setfillstyle(SOLID_FILL,BLACK);
        floodfill(351,121,BLACK);

        line(295,120,285,160);
        line(295,120,305,160);
        line(285,160,305,160);


        ellipse(300,180,180,0,60,50);
	    getch();
    return 0;
}

