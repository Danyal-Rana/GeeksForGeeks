//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n)
	{
	    for (int i=n ; i>=1 ; i--)
	    {
	        for (int j=i ; j<n ; j++)
	        {
	            cout << " ";
	        }
	        for (int k=i ; k>=1 ; k--)
	        {
	            cout << "*";
	        }
	        for (int l=i ; l>1 ; l--)
	        {
	            cout << "*";
	        }
	        cout << endl;
	    }
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends