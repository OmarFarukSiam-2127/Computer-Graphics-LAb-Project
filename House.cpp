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
	rectangle(160,180,500,420);
	setfillstyle(SOLID_FILL,YELLOW);
    floodfill(161,181,YELLOW);

    setcolor(RED);
	rectangle(260,290,390,420);
	setfillstyle(SOLID_FILL,RED);
    floodfill(261,291,RED);

    setcolor(BLUE);
	rectangle(180,210,260,270);
	setfillstyle(SOLID_FILL,BLUE);
    floodfill(181,211,BLUE);

    setcolor(GREEN);
	rectangle(390,210,460,270);
	setfillstyle(SOLID_FILL,GREEN);
    floodfill(391,210,GREEN);

	line(160,180,320,50);
	line(500,180,320,50);

	getch();
	closegraph();
}
