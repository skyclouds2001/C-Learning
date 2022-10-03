#include<iostream>
using namespace std;
int main()
{
	int a[]={1,1,2,2,2,3,4,4,4,6,7,8,8,8,8,8,9,9,9,9};
	int l=0,r=sizeof(a)/sizeof(a[0])-1;
	int t=5;
	for(int i=l;i<=r;i++)
		cout<<i<<":"<<a[i]<<endl;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]>=t)
			r=mid-1;
		else
			l=mid+1;
	}
	cout<<l<<" "<<r<<endl;
	return 0;
}
