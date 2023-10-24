//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    vector<long long> myVector;
    
    queue<long long int> myQueue;
    
    //adding -ve nums of first window
    for (long long int i=0; i<K; i++)
    {
        if (A[i] < 0)
        {
            myQueue.push (i);
        }
    }
    
    // solving for remaining windows
    for (long long int i=K; i<N; i++)
    {
        // getting the answer
        if (myQueue.empty())
        {
            myVector.push_back (0);
        }
        else
        {
            myVector.push_back (A[myQueue.front()]);
        }
        
        // removing the non-window -ve numbers
        if (!myQueue.empty() && i-myQueue.front() >= K)
        {
            myQueue.pop();
        }
        
        // inserting the -ve numbers of the current window
        if (A[i] < 0)
        {
            myQueue.push (i);
        }
    }
    
    if (myQueue.empty())
    {
        myVector.push_back (0);
    }
    else
    {
        myVector.push_back (A[myQueue.front()]);
    }
    
    return myVector;
}