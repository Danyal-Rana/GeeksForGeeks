//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack <char> myStack;
        
        for (int i=0; i<x.size(); i++)
        {
            char currentChar = x[i];
            
            if (currentChar=='(' || currentChar=='{' || currentChar=='[')
            {
                myStack.push (currentChar);
            }
            else
            {
                if (! myStack.empty())
                {
                    char topChar = myStack.top();
                    if (topChar=='(' && currentChar==')')
                    {
                        myStack.pop();
                    }
                    else if (topChar=='{' && currentChar=='}')
                    {
                        myStack.pop();
                    }
                    else if (topChar=='[' && currentChar==']')
                    {
                        myStack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        
        if (myStack.empty())
        {
            return true;
        }
        return false;
    }

};



//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends