//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int lInd = 0;
        int rInd = N-1;
        
        if (k > Arr[rInd])
        {
            return N;
        }
        
        while (lInd <= rInd)
        {
            int mInd = lInd + (rInd-lInd)/2;
            
            if (k == Arr[mInd])
            {
                return mInd;
            }
            
            else if (k < Arr[mInd])
            {
                rInd = mInd - 1;
            }
            
            else if (k > Arr[mInd])
            {
                lInd = mInd + 1;
            }
        }
        return lInd;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends