#include <bits/stdc++.h>
using namespace std;
void longestPalindrome(char str[]) {
    
    int i,j,k,start,end;
    int n=strlen(str);
    int max=0,c,l,m;
    
	for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        	c=0;
        	if(str[j]==str[i])
        	{
        		
            	start=i;end=j;
            	for(int s=start;s<=end;s++)
            	{
            		c++;
				}
                while(start<end)
                {
                		
                   if(str[start]!=str[end])
                    {
                        c=1;
                	    break;
                    }
                   start++;end--;
                 }
                 
            if(c>max)
            {
			    max=c;
                l=i;m=j;
            }
			}       
        }
    }
    for(i=l;i<=m;i++)
    {
    	cout<<str[i];
	}
    
}
int main(){
   char str[200];
   scanf("%s" ,&str);
    
    longestPalindrome(str) ;
 }

