#include<stdio.h>
void main()
{
	FILE*stream;
	long l=0;
	float fp=0;
	char s[81]= {0};
	char c=0;
	stream=fopen("fscanf.txt","w+");
	if(stream==NULL)  printf("ERROR!");
	else
	{
		fprintf(stream,"%s %ld %f %c","a_string",6500,3.1415,'x');
		fseek(stream,0L,SEEK_SET);
		fscanf(stream,"%s",s);
		printf("%ld\n",ftell(stream));
		fscanf(stream,"%ld",&l);
		printf("%ld\n",ftell(stream));
		fscanf(stream,"%f",&fp);
		printf("%ld\n",ftell(stream));
		fscanf(stream,"%c",&c);
		printf("%ld\n",ftell(stream));
		rewind(stream);
		fscanf(stream,"%s",s);
		printf("%s\n",s);
		fclose(stream);
	}
 } 
