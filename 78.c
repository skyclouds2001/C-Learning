#include<stdio.h>
int main()
{
	short N=0,M=0,C=0;
	scanf("%hd%hd%hd",&N,&M,&C);
	short x=0,y=C-1;
	int count=0;
	short i=0,j=0;
	char map[N][M];
	_Bool flag[N][M],sym=1;
	getchar();
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%c",&map[i][j]);
			flag[i][j]=0;
		}
		getchar();
	}
	flag[x][y]=1;
	while(1)
	{
		switch(map[x][y])
		{
			case 'N':x--;count++;break;
			case 'S':x++;count++;break;
			case 'E':y++;count++;break;
			case 'W':y--;count++;break;
		}
		if(x<0||x>=N||y<0||y>=M)
		{
			sym=1;
			break;
		}
		if(flag[x][y])
		{
			sym=0;
			break;
		}		
		flag[x][y]=1;		
	}
	if(sym==0)  printf("loop %d",count);
	else  printf("out %d",count);
	return 0;
}
