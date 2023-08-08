//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)
    {
        
        for (int i=1; i<=n; i++)
        {
            char myChar = 'A';
            for (int j=1; j<=(n-i); j++)
            {
                cout << " ";
            }
            for (int k=1; k<=i; k++)
            {
                cout << myChar;
                myChar++;
            }
            myChar--;
            for (int l=1; l<i; l++)
            {
                myChar--;
                cout << myChar;                
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