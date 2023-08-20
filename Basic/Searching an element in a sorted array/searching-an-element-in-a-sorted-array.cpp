//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
        int lInd = 0;
        int rInd = N-1;
        
        while (lInd <= rInd)
        {
            int mInd = lInd + (rInd - lInd)/2;
            
            if (K == arr[mInd])
            {
                return 1;
            }
            
            else if (K < arr[mInd])
            {
                rInd = mInd - 1;
            }
            
            else if (K > arr[mInd])
            {
                lInd = mInd + 1;
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends