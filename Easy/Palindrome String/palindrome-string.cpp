//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    string revString;
        for (int i=S.length() - 1; i>=0; i--)
        {
            if (isalnum(S[i]))
            {
                S[i] = tolower(S[i]);
                revString.push_back(S[i]);
            }
            else
            {
                S.erase(i, 1);
            }
        }

        if (S == revString)
            return 1;
        else
            return 0;
	}

};


//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends