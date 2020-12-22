#include<bits/stdc++.h>
using namespace std;
void find_max_min(int a[],int n)
{
	sort(a,a+n);
	cout<<"Max:"<<a[n-1]<<endl;
	cout<<"Min:"<<a[0];
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int a[]={16,8,7,56,89,2,103};
	int n=sizeof(a)/sizeof(a[0]);
	find_max_min(a,n);
	return 0;
}