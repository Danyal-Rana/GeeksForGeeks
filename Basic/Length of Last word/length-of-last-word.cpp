//{ Driver Code Starts
//Initial Template for C++

// CPP program for implementation of efficient 
// approach to find length of last word 
#include <bits/stdc++.h> 
using namespace std; 

int findLength(string s);

// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	t+=1;
	bool flag = false;
	while(t--){
	    string s;
	    getline(cin,s);
	    if(!flag){
	        flag = true;
	        continue;
	    }
	    cout<<findLength(s)<<endl;
	}
	return 0;
} 

// } Driver Code Ends


//User function Template for C++

int findLength(string s)
{
    int myLetters = 0;
    int myChecker = 0;
    
    for (int i=s.size()-1; i>=0; i--)
    {
        if (s[i] == ' ' && myChecker == 1)
        {
            break;
        }
        
        if (s[i] != ' ')
        {
            myLetters++;
            myChecker = 1;
        }
    }
    return myLetters;
}