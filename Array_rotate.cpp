#include<bits/stdc++.h>
using namespace std;
void rotate_right(int a[],int n, int m)
{
	int temp;
	int i,j;
	for(j=0;j<m;j++)
	{
		temp=a[n-1];
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
	a[0]=temp;

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
}
void rotate_left(int a[],int n,int m)
{
	int temp;
	int i,j;
	for(j=0;j<m;j++)
	{
		temp=a[0];
	for(i=0;i<n-1;i++)
		a[i]=a[i+1];
	a[n-1]=temp;

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
   }
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int a[]={1,2,3,4,5};
	int m=5;
	int n=sizeof(a)/sizeof(a[0]);
	//rotate_left(a,n,m);
	rotate_right(a,n,m);
	return 0;
}