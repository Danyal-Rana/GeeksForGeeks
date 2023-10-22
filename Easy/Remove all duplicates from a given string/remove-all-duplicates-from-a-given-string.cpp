//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
public:
    string removeDuplicates(string str)
    {
        stack<char> myStack;
        unordered_set<char> seen;

        string result;

        for (char c : str)
        {
            if (seen.find(c) == seen.end())
            {
                seen.insert(c);
                myStack.push(c);
            }
        }

        while (!myStack.empty())
        {
            result = myStack.top() + result;
            myStack.pop();
        }

        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends