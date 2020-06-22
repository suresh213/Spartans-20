#include<bits/stdc++.h>
using namespace std;
int main()
{
	    int n,i,j;
	    cin>>n;
	    int a[n][n];
        int top=0,left=0,right=n-1,bottom=n-1,c=1;
        while(c<=n*n){
            for(int i=top;i<=right;i++ ){
                a[top][i]=c;
		c++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                a[i][right]=c;
		c++;
            }
            right--;
            for(int i=right;i>=left;i--){
                a[bottom][i]=c;
	        c++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                a[i][left]=c;
		c++;
            }
            left++;
        }
        for(i=0;i<n;i++)
        {
        	for(j=0;j<n;j++)
        	{
        		cout<<a[i][j];
			}
			cout<<endl;
		}
}
