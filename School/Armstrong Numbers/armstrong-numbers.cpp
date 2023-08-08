//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n)
    {
        int myNum = n;
        int sum = 0;
        
        while (n>0)
        {
            int myDigit = n%10;
            n = n/10;
            myDigit = myDigit*myDigit*myDigit;
            sum = sum + myDigit;
        }
        
        if (sum == myNum)
            return "Yes";
        else
            return "No";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends