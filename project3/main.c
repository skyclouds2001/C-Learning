#include"acllib.h"
#include<stdio.h>

void timerlistener(int id)
{
	static int count=0;
	printf("id=%d\n",id);
	if(id==0)
	{
		count++;
	}
	if(count==10)
	{
		cancelTimer(0);
		cancelTimer(1);
	}
}

void mouselistener(int x,int y,int button,int event)
{
	printf("x=%d y=%d button=%d event=%d\n",x,y,button,event);
	static int ox=0,oy=0;
	beginPaint();
	line(ox,oy,x,y);
	endPaint();
	ox=x; oy=y;
}

void charlistener(char key)
{
	printf("key=%c\n",key);
}

void keyboardlistener(int key,int event)
{
	printf("key=%d event=%d\n",key,event);
}

int Setup()
{
	initConsole();
	initWindow("test",DEFAULT,DEFAULT,600,600);
	
	registerTimerEvent(timerlistener);
	registerMouseEvent(mouselistener);
	registerKeyboardEvent(keyboardlistener);
	registerCharEvent(charlistener);
	startTimer(0,1000);
	startTimer(1,500);
	//showCaret();
	//setCaretPos(300,300);
	//setCaretSize(2,5);
	//hideCaret();
	
	return 0;
}
