#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j,flag;
		cin>>m>>n;
		
		for(i=m;i<=n;i++)
		{
			flag=1;
			if(i<=1)
			{
				continue;
			}
			for(j=2;j*j<=i;j++)
	        {
	      	    if(i%j==0)
	      	     {
		           flag=0;
		           break;
		         }
         	}
         	if(flag==1)
		         {
		         	cout<<i<<endl;
				 }
		}
		cout<<endl;
	}
	return 0;
}
