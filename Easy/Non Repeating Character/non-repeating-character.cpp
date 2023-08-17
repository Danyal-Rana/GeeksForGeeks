//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       for (int i=0; i<S.size(); i++)
        {
            int myCounter = 0;
            for (int j=0; j<S.size(); j++)
            {
                if (S[i] == S[j])
                {
                    myCounter++;
                    if (myCounter > 1)
                    {
                        break;
                    }
                }
            }
            if (myCounter == 1)
            {
                return S[i];
            }
        }
        return '$';
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends