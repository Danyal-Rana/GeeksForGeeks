//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        for (int i=0; i<s.size(); i++)
        {
            int myCounter = 0;
            for (int j=0; j<s.size(); j++)
            {
                if (s[i] == s[j])
                {
                    myCounter++;
                }
            }
            if (myCounter > 1)
            {
                return s[i];
            }
        }
        return '#';
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends