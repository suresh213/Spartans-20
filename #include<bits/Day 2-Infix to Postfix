#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   string str;
	   int i;
	   stack<char> s;
	   cin>>str;
	   for(i=0;i<str.length();i++)
	   {
	   	if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^')
	   	  {
	   	  	s.push(str[i]);
		  }
		else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
			cout<<str[i];
		}
		else if(str[i]==')')
		{
			cout<<s.top();
			s.pop();
		}
	   }
	   cout<<endl;
    }
}
