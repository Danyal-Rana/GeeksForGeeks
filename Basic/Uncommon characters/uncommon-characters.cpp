//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            vector<int> a(26,0);
            vector<int> b(26,0);
            
            
            for(int i=0;i<A.length();i++)
            {
                a[A[i]-'a']++;
            }
            
            for(int i=0;i<B.length();i++)
            {
                b[B[i]-'a']++;
            }
            
            string myStr = "";
            for(int i=0;i<26;i++)
            {
                if((a[i]==0 && b[i]!=0) || (a[i]!=0 &&b[i]==0))
                {
                    myStr += ('a'+i);
                }
            }
            
            if(myStr.length()==0)
            {
                return "-1";
            }
            else
            {
                return myStr;
            }
        }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends