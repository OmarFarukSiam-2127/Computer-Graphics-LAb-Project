#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

// Function to draw a car
void flag() {
   setcolor(GREEN);
	rectangle(50,50,220,150);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(51,51,GREEN);

	setcolor(WHITE);
	rectangle(40,40,50,300);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(41,41,WHITE);

	setcolor(RED);
	circle(130,100,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(131,101,RED);

}

// Function to draw a bicycle
void emoji() {
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
}

void house() {
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

}
void doraemon() {
 int i;
  for(i=0;i<50;i++)
	{
	//LEGS
	setcolor(15);
	ellipse(200,450,150,390,50,16);
	line(157,441,243,441);
	ellipse(252,448,246,389,50,18);
	line(243,441,297,441);
	setcolor(i);
	ellipse(249,441,90,180,10,15);

	//TAIL
	setcolor(12);
	ellipse(155,410,80,280,8,8);

	setcolor(i);
	line(157,441,157,370);
	line(297,441,297,350);

	//left hand
	setcolor(15);
	circle(147,357,16);
	setcolor(i);
	ellipse(137,342,300,330,58,19);
	ellipse(174,348,110,170,29,49);

	//right hand
	setcolor(15);
	circle(327,275,16);
	setcolor(i);
	ellipse(265,260,299,340,74,90);
	ellipse(323,285,110,170,25,19);

	//NECK
	setcolor(12);
	line(163,302,285,302);
	line(163,298,285,298);
	ellipse(163,301,90,270,3,3);
	ellipse(285,300,280,80,4,3);

	//tummy bag
	setcolor(15);
	ellipse(243,334,143,40,56,48);
	ellipse(244,346,163,15,30,24);
	line(214,340,273,340);

	//bell
	setcolor(14);
	circle(244,310,8);
	line(238,306,251,306);
	line(236,309,251,309);

	//head
	setcolor(i);
	ellipse(220,237,0,180,87,60);
	ellipse(180,237,180,250,47,65);
	ellipse(268,237,290,360,40,65);

	//face
	setcolor(15);
	ellipse(263,277,15,90,45,60);
	ellipse(245,210,0,360,19,23);
	ellipse(207,210,0,360,19,23);
	ellipse(202,237,190,243,47,69);
	ellipse(187,254,90,170,32,35);
	circle(216,217,5);
	circle(237,218,5);

	//nose
	setcolor(12);
	circle(227,236,8);
	ellipse(230,262,180,360,45,30);
	ellipse(232,263,10,190,47,6);

	setcolor(15);
	ellipse(275,253,290,110,10,8);

	line(227,244,227,257);
	line(245,238,269,234);
	line(245,244,269,242);
	line(245,250,269,252);

	line(185,236,210,238);
	line(185,244,210,244);
	line(185,252,210,250);
    }
}


int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int option;
    char ch;

    do {
        cleardevice(); // Clear the screen before drawing the menu again

        // Draw menu options
        cout << "Select an option:" << endl;
        cout << "1. Flag" << endl;
        cout << "2. Emoji" << endl;
        cout << "3. House" << endl;
        cout << "4. Doraemon" << endl;
        cout << "5. Pendrive" << endl;
        cout << "6. Exit" << endl;

        // Get user input for option
        cout << "Enter your choice: ";
        cin >> option;

        // Draw the selected item based on user input
        switch(option) {
            case 1:
                flag();
                break;
            case 2:
                emoji();
                break;
            case 3:
                house();
                break;
            case 4:
                doraemon();
                break;


            case 6:
                exit(0); // Exit the program
            default:
                cout << "Invalid option! Please enter a number from 1 to 4." << endl;
        }

        cout << "Press any key to continue or 'q' to quit: ";
        cin >> ch;
    } while(ch != 'q');

    closegraph();
    return 0;
}
