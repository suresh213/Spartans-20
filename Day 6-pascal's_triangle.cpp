#include <bits/stdc++.h>
using namespace std;
int binomialCoeff(int n, int k); 
void printPascal(int n) 
{ 
    for (int j=0;j<n;j++) 
    { 
        for (int i = 0; i <= j; i++) 
            cout<<binomialCoeff(j, i); 
    cout<<endl;
    } 
} 
int binomialCoeff(int n, int k) 
{ 
    int res=1; 
    if (k>n-k) 
    k = n-k; 
    for (int i=0; i<k;i++) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    }       
    return res; 
} 
int main() 
{ 
    int n; 
    cin>>n;
    printPascal(n); 
    return 0; 
} 
