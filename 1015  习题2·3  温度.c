#include<stdio.h>

int main()
{
	int h,min;
	double t,T;
	printf("�����뾭��ʱ�䣨Сʱ�����ӣ���\n");
	scanf("%d %d",&h,&min);
	t=(double)h+(double)min/60.0;
	T=4*t*t/(t+2)-20;
	printf("�����¶�Ϊ%lf",T);
	return 0;
 } 
