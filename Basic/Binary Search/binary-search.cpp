//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k)
    { 
        int lInd = 0;
        int rInd = n-1;
        
        while (lInd <= rInd)
        {
            int mInd = lInd + (rInd - lInd)/2;
            
            if (k == arr[mInd])
            {
                return mInd;
            }
            
            else if (k < arr[mInd])
            {
                rInd = mInd - 1;
            }
            
            else if (k > arr[mInd])
            {
                lInd = mInd + 1;
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends