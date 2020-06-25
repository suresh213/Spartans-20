#include<bits/stdc++.h> 
#include<climits>
using namespace std; 
int coverPoints(int* A, int n1, int* B, int n2);
int main() 
{   
    int n1,n2;
	cin>>n1>>n2;
    int a[n1],b[n2],i; 
    for(i=0;i<n1;i++)
	    cin>>a[i];
	for(i=0;i<n2;i++)
	    cin>>b[i];    
    
    cout<<coverPoints(a,n1,b,n2);
	return 0; 
} 
int coverPoints(int* A, int n1, int* B, int n2) {
    int x,y;
    int i,tot=0;
    for(i=1;i<n1;i++){
    x=abs(A[i]-A[i-1]);
    y=abs(B[i]-B[i-1]);
    if(x>y)
    {
    tot=tot+x;
    }
    else
    tot=tot+y;
    }
    return tot;
}
