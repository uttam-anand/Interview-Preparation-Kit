#include<bits/stdc++.h>
using namespace std;
#define MAX 100
void sort012(int a[],int n)
{
	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
		switch(a[mid])
		{
			case 0:
				swap(a[low++],a[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(a[mid],a[high--]);
				break;
		}
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int a[MAX],n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort012(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}