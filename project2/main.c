#include"acllib.h"
#include<stdio.h>

int Setup()
{
	//initConsole();
	initWindow("test",DEFAULT,DEFAULT,600,600);
	
	//printf("Width: %d Height: %d\n",getWidth(),getHeight());
	
	beginPaint();
	
	line(0,0,600,0);
	line(0,599,600,599);
	moveTo(300,300);	//moveREl(300,300);
	//printf("X: %d\t Y: %d\n",getX(),getY());
		setPenColor(BLUE);
		//setPenWidth(1);
		setPenStyle(PEN_STYLE_DOT);
	line(0,0,600,600);
	line(0,600,600,0);
	//lineTo(0,0);
	//lineRel(300,-300);?
	//lineRel(-300,300);?
		POINT p[5]={{0,0},{100,150},{300,300},{500,450},{600,600}};
		setPenColor(RED);
		setPenWidth(2);
		setPenStyle(PEN_STYLE_SOLID);
	//polyBezier(p,5);?
	polyLine(p,5);
		setPenColor(GREEN);
		setPenWidth(1);
		setPenStyle(PEN_STYLE_DASH);
	arc(0,0,600,600,100,100,500,500);
	
		setPenColor(EMPTY);
		setBrushStyle(BRUSH_STYLE_CROSS);
		setBrushColor(CYAN);
	ellipse(0,100,600,500);
		POINT q[5]={{100,100},{100,150},{300,300},{500,450},{500,500}};
		setBrushStyle(BRUSH_STYLE_DIAGCROSS);
		setBrushColor(MAGENTA);
	polygon(q,5);
		setBrushStyle(BRUSH_STYLE_HORIZONTAL);
		setBrushColor(RED);
		setPenColor(RED);
	rectangle(0,400,600,500);
		setBrushStyle(BRUSH_STYLE_FDIAGONAL);
		setBrushColor(YELLOW);
		setPenColor(EMPTY);
	roundrect(0,100,600,200,10,10);
	
	endPaint();
	
	return 0;
}
