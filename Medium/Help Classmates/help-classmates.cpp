//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int> myStack;
        myStack.push (-1);
        
        vector<int> myVector (n);
        
        for (int i=n-1; i>=0; i--)
        {
            int myNum = arr[i];
            
            while (myStack.top() >= myNum)
            {
                myStack.pop();
            }
            myVector[i] = myStack.top();
            myStack.push (myNum);
        }
        
        return myVector;
    } 
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends