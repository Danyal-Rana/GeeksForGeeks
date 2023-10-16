//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    
    void myFun (stack<int>&s, int mid, int i)
    {
        if (mid == i)
        {
            s.pop();
            return;
        }
        
        int temp = s.top();
        s.pop();
        
        myFun (s, mid, i+1);
        
        s.push (temp);
    }
    
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid = (sizeOfStack/2) + 1;
        myFun (s, mid, 1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends