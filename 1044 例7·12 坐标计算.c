#include<stdio.h>
typedef struct{
	float x;
	float y;
}POINT; 
void move(POINT *pt,float a,float b)
{
	pt->x+=a;
	pt->y+=b;
}
void main()
{
	POINT o;
	float a,b;
	scanf("%f%f",&o.x,&o.y);
	scanf("%f%f",&a,&b);
	move(&o,a,b);
	printf("(%f,%f)",o.x,o.y);
}

