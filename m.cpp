#include <graphics.h>
#include <cstdio>
#include <iostream>
#include <conio.h>
using namespace std;

void saturn()
{
	fillcircle(400, 300, 60);
	
	ellipse(280, 325, 520, 275);
	ellipse(100, 385, 700, 215);
	ellipse(170, 350, 630, 250);

}

int main()
{
	initgraph(800, 600, EX_SHOWCONSOLE|EX_DBLCLKS);
	/*fillcircle(400, 300, 60);
	ellipse(280,325,520,275);
	ellipse(170,385,630,215);*/
	saturn();
	_getch();
	closegraph();
	return 0;
}
