#include<bits/stdc++.h>
using namespace std;
int reverse(int a);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<reverse(reverse(a)+reverse(b))<<endl;
	}
	return 0;
}
int reverse(int a)
{
	int rev=0;
	while(a!=0)
	{
		rev=rev*10+a%10;
		a/=10;
	}
	return rev;
}
