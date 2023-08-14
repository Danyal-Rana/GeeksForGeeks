//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOcc (vector<int> &arr, int n, int k)
{
    int sInd = 0;
    int eInd = n-1;
    
    int ans = -1;
    
    int mInd = (sInd + eInd)/2;
    
    while (sInd <= eInd)
    {
        if (arr[mInd] == k)
        {
            ans =  mInd;
            eInd = mInd - 1;
        }
        
        else if (arr[mInd] > k)
        {
            eInd = mInd - 1;
        }
        
        else if (arr[mInd] < k)
        {
            sInd = mInd + 1;
        }
        mInd = (sInd + eInd)/2;
    }
    return ans;
}

int lastOcc (vector<int> &arr, int n, int k)
{
    int sInd = 0;
    int eInd = n-1;
    
    int ans = -1;
    
    int mInd = (sInd + eInd)/2;
    
    while (sInd <= eInd)
    {
        if (arr[mInd] == k)
        {
            ans =  mInd;
            sInd = mInd + 1;
        }
        
        else if (arr[mInd] > k)
        {
            eInd = mInd - 1;
        }
        
        else if (arr[mInd] < k)
        {
            sInd = mInd + 1;
        }
        mInd = (sInd + eInd)/2;
    }
    return ans;
}

class Solution
{
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x)
    {
        vector <int> myVector;
    
        myVector.push_back(firstOcc(arr, n, x));
        if (myVector[0] == -1)
        {
            return myVector;
        }
        myVector.push_back(lastOcc(arr, n, x));
    
        return myVector;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends