//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    vector<long long> prevSmaller (long long arr[], int n)
    {
        stack<long long> myStack;
        vector<long long> myVector (n);
        
        for (int i=0; i<n; i++)
        {
            while (!myStack.empty() && arr[myStack.top()] >= arr[i])
            {
                myStack.pop();
            }
            
            if (myStack.empty())
            {
                myVector[i] = -1;
            }
            else
            {
                myVector[i] = myStack.top();
            }
            
            myStack.push (i);
        }
        return myVector;
    }
    
    vector<long long> nextSmaller (long long arr[], int n)
    {
        stack<long long> myStack;
        vector<long long> myVector (n);
        
        for (int i=n-1; i>=0; i--)
        {
            while (!myStack.empty() && arr[myStack.top()] >= arr[i])
            {
                myStack.pop();
            }
            
            if (myStack.empty())
            {
                myVector[i] = n;
            }
            else
            {
                myVector[i] = myStack.top();
            }
            
            myStack.push (i);
        }
        return myVector;
    }
    
    
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> prevSmal = prevSmaller (arr, n);
        vector<long long> nextSmal = nextSmaller (arr, n);
        
        long long maxArea = 0;
        
        for (int i=0; i<n; i++)
        {
            long long area = (nextSmal[i]-prevSmal[i]-1)*arr[i];
            maxArea = max (area, maxArea);
        }
        
        return maxArea;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends