#include<stdio.h>
#include<math.h>
int main()
{
	short ssh[8]={8,9,11,12,14,15,19,21};
	short ssm[8]={0,43,19,47,0,45,0,45};
	short seh[8]={10,11,13,15,16,17,21,23};
	short sem[8]={16,52,31,0,8,55,20,58};
	short h=0,m=0,min=0,mini=0;
	short i=0,t=0,s=0;
	scanf("%hd%hd",&h,&m);
	t=h*60+m;
	min=fabs(24*60-t);
	for(i=0;i<8;i++)
	{
		s=ssh[i]*60+ssm[i];
		if(fabs(s-t)<min)
		{
			min=fabs(s-t);
			mini=i;
		}    
	}
	if(ssh[mini]<12&&seh[mini]<12)
	{
		if(ssm[mini]!=0&&sem[mini]!=0)
	        printf("%d:%d a.m. - %d:%d a.m.",ssh[mini],ssm[mini],seh[mini],sem[mini]);
	    else if(ssm[mini]==0&&sem[mini]!=0)
	        printf("%d:00 a.m. - %d:%d a.m.",ssh[mini],seh[mini],sem[mini]);
	    else if(ssm[mini]!=0&&sem[mini]==0)
	        printf("%d:%d a.m. - %d:00 a.m.",ssh[mini],ssm[mini],seh[mini]);
	    else if(ssm[mini]==0&&sem[mini]==0)
	        printf("%d:00 a.m. - %d:00 a.m.",ssh[mini],seh[mini]);
	}	    	    
	else if(ssh[mini]<12&&seh[mini]>11)
	{
		if(ssm[mini]!=0&&sem[mini]!=0)
	        printf("%d:%d a.m. - %d:%d p.m.",ssh[mini],ssm[mini],seh[mini],sem[mini]);
	    else if(ssm[mini]==0&&sem[mini]!=0)
	        printf("%d:00 a.m. - %d:%d p.m.",ssh[mini],seh[mini],sem[mini]);
	    else if(ssm[mini]!=0&&sem[mini]==0)
	        printf("%d:%d a.m. - %d:00 p.m.",ssh[mini],ssm[mini],seh[mini]);
	    else if(ssm[mini]==0&&sem[mini]==0)
	        printf("%d:00 a.m. - %d:00 p.m.",ssh[mini],seh[mini]);
	}	    
	else if(ssh[mini]>11&&seh[mini]>11)
	    if(ssm[mini]!=0&&sem[mini]!=0)
	        printf("%d:%d p.m. - %d:%d p.m.",ssh[mini],ssm[mini],seh[mini],sem[mini]);
	    else if(ssm[mini]==0&&sem[mini]!=0)
	        printf("%d:00 p.m. - %d:%d p.m.",ssh[mini],seh[mini],sem[mini]);
	    else if(ssm[mini]!=0&&sem[mini]==0)
	        printf("%d:%d p.m. - %d:00 p.m.",ssh[mini],ssm[mini],seh[mini]);
	    else if(ssm[mini]==0&&sem[mini]==0)
	        printf("%d:00 p.m. - %d:00 p.m.",ssh[mini],seh[mini]);
	return 0;
 } 
