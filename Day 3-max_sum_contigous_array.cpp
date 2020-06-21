#include<iostream> 
#include<climits>
using namespace std; 
int maxSubArraySum(int a[], int size);
int main() 
{ 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    cout<<maxSubArraySum(a, n); 
    return 0; 
} 
//kadane's Algorithm..O(N)
int maxSubArraySum(int a[], int n1) {
    int max = INT_MIN, newmax = 0,i; 
  
    for (i = 0; i < n1; i++) 
    { 
        newmax = newmax + a[i]; 
        if (max < newmax) 
            max = newmax; 
  
        if (newmax < 0) 
            newmax = 0; 
    } 
    return max; 
}
