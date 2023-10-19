//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n)
    {
        stack<long long> myStack;
        vector<long long> myVector(n);

        for (int i = n - 1; i >= 0; i--)
        {
            long long currentNum = arr[i];

            while (!myStack.empty() && myStack.top() <= currentNum)
            {
                myStack.pop();
            }

            if (!myStack.empty()) {
                myVector[i] = myStack.top();
            } else {
                myVector[i] = -1;
            }

            myStack.push(currentNum);
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
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends