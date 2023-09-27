//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    int i=0, j=0, k=0;
    
    string myStr = S1+S2;
    
    while (k<S1.size()+S2.size())
    {
        if (i<S1.size())
        {
            myStr[k++] = S1[i++];
        }
        
        if (j<S2.size())
        {
            myStr[k++] = S2[j++];
        }
    }
    
    return myStr;
}