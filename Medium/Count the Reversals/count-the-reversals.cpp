//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    if (s.size()%2 != 0)
    {
        return -1;
    }
    
    stack<char> myStack;
    int myCounter = 0;
    
    for (auto c : s)
    {
        if (!myStack.empty() && ( myStack.top()=='{' && c=='}'))
        {
            myStack.pop();
        }
        else
        {
            myStack.push (c);
        }
    }
    
    while (! myStack.empty())
    {
        char c1 = myStack.top();
        myStack.pop();
        char c2 = myStack.top();
        myStack.pop();
        
        if (c1 == c2)
        {
            myCounter++;
        }
        else
        {
            myCounter += 2;
        }
    }
    return myCounter;
}