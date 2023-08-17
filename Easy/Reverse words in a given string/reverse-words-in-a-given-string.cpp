//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string myStr = "";
        string sTemp;
        
        int i = 0;
        int sSize = S.size();
        
        while (i < sSize)
        {
            while (i<sSize && S[i] == '.')
            {
                i++;
            }
            while (i<sSize && S[i] != '.')
            {
                sTemp.push_back(S[i]);
                i++;
            }
            
            if (! sTemp.empty())
            {
                if (! myStr.empty())
                {
                    sTemp = sTemp + ".";
                }
                myStr = sTemp + myStr;
                sTemp.clear();
            }
        }
        return myStr;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends