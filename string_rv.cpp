#include<bits/stdc++.h>
using namespace std;

void rec_rev(string s)
{
	if(s.length()==0)
		return;

	rec_rev(s.substr(1));
	cout<<s[0];
}

void rev_str(string s)
{
	int i,j;
	for(i=0,j=s.length()-1;i<j;i++,j--)
		swap(s[i],s[j]);
	cout<<s;
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
	string s="Tribitur";
	//rev_str(s);
	//rec_rev(s);
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}