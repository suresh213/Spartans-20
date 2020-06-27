#include<iostream> 
using namespace std; 
string reverse(string str) 
{ 
    int i = str.length() - 1; 
    int start, end = i + 1; 
    string result = ""; 
    while(i >= 0) 
    { 
        if(str[i] == ' ') 
        { 
            start = i + 1; 
            while(start != end)
			{
			   result += str[start++]; 
            }
            result += ' '; 
            end = i; 
        } 
        i--; 
    } 
    start = 0; 
    while(start != end) 
        {
        	result += str[start++]; 
       }
    return result; 
} 
  
int main() 
{ 
    string str = "this is good"; 
      
    cout << reverse(str); 
      
    return 0; 
} 
