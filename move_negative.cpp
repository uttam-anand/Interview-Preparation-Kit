#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
			{
				swap(a[i],a[j]);
				j++;
			}
		}
		
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
}
void IO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int main()
{
	IO();	
	int a[]={10 ,20,50,-50,-80,-96,87,998};
	int n=sizeof(a)/sizeof(a[0]);
	solve(a,n);
	return 0;
}