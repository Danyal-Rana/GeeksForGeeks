//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn(string s)
    {
        string num = "", result = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (isdigit(s[i]))
                num = s[i] + num;
            else
            {
                result += num + s[i];
                num = "";
            }
        }
        return result + num;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends