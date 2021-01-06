#include<bits/stdc++.h>
using namespace std;
int max_sum(int a[],int n)
{
	int max=INT_MIN, curr_max=0;
	for(int i=0;i<n;i++)
	{
		curr_max=curr_max+a[i];
		if(max<curr_max)
			max=curr_max;
		if(curr_max<0)
			curr_max=0;
	}
	return max;
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
	//IO();	
	int a[]={10,20,-30,40,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<max_sum(a,n);	
	return 0;
}
