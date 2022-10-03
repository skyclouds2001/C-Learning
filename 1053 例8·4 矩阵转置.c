#include<stdio.h>
int main()
{
	FILE*fp=fopen("a.txt","r");
	short m=0,n=0,i,j;
	if(fp==NULL)
	{
		printf("ERROR");
		return -1;
	}
	fscanf(fp,"%hd%hd",&m,&n);
	short a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			fscanf(fp,"%hd",&a[i][j]);
		}
	}
	fclose(fp);
	fp=fopen("b.txt","w");
	if(fp==NULL)
	{
		printf("ERROR");
		return -1;
	}
	fprintf(fp,"%hd %hd \n",n,m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			fprintf(fp,"%hd ",a[j][i]);
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}
