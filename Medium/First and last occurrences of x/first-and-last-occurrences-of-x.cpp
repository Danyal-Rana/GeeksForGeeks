//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOcc (int arr[], int n, int k)
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

int lastOcc (int arr[], int n, int k)
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

vector<int> find(int arr[], int n , int x )
{
    vector <int> myVector;
    
    myVector.push_back(firstOcc(arr, n, x));
    myVector.push_back(lastOcc(arr, n, x));
    
    return myVector;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends