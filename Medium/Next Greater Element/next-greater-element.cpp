//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        stack<long long> myStack;
        myStack.push (-1);
        vector<long long> myVector (n);
        
        for (int i=n-1; i>=0; i--)
        {
            long long currentNum = arr[i];
            
            while (!myStack.empty() && myStack.top() <= currentNum)
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
            
            myStack.push (currentNum);
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends