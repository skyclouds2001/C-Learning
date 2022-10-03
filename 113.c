/*#include<stdio.h>
int main()
{
	int t=0,fee=0;
	float d=0;
	scanf("%f%d",&d,&t);
	if(d>0&&d<=3.0&&t>=0)
	{
		fee=10+2*(t/5);
	}
	else if(d<=10.0&&d>3.0&&t>=0)
	{
		fee=(int)(10+(d-3)*2+2*(t/5)+0.5);
	}
	else if(d>10.0&&t>=0) 
	{
		fee=(int)(10+7*2+(d/-10)*3+2*(t/5)+0.5);
	}
	printf("%d",fee);	   	
	return 0;
 } */
 
#include <stdio.h>
int main()
{
  float a;
  int b,temp;
  scanf("%f %d",&a,&b);
  if(a<=3){
    temp=10;
  }
  else if(a>3&&a<=10){
    temp=(int)(10+(a-3)*2+0.5);
  }
  else{
    temp=(int)(24+(a-10)*3+0.5);
  }
  printf("%d",temp+b/5*2);
  return 0;
}
