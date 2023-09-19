//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int aSize = A.size();
        int bSize = B.size();
        
        int a = 0;
        int b = 0;
        
        while (a<aSize && b<bSize)
        {
            if (A[a] == B[b])
            {
                a++;
            }
            b++;
        }
        return a==aSize ? 1 : 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends