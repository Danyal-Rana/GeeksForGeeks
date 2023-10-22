//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    stack<char> myStack;
    
    for (char c : s)
    {
        if (!myStack.empty() && (myStack.top() == '(' && c == ')'))
        {
            myStack.pop();
        }
        else if (!myStack.empty() && (myStack.top() == '{' && c == '}'))
        {
            myStack.pop();
        }
        else if (!myStack.empty() && (myStack.top() == '[' && c == ']'))
        {
            myStack.pop();
        }
        else
        {
            myStack.push(c);
        }
    }
    
    if (myStack.empty())
    {
        return true;
    }
    return false;
}