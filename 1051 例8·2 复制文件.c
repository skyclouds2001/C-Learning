#include<stdio.h>
int main()
{
	FILE*fpr=fopen("input.txt","r");
	FILE*fpw=fopen("output.txt","w");
	char ch=0;
	if(fpr==NULL&&fpw==NULL)
	{
		printf("ERROR");
		return -1;
	}
	while((ch=fgetc(fpr))!=EOF)  fputc(ch,fpw);
	fclose(fpr);
	fclose(fpw);
	return 0;
}
