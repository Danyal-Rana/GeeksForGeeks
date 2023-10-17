//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle = -1;
    stack<int> s;
    vector <pair<int, int>> myVector;
    public:
    
       /*returns min element from stack*/
       int getMin()
       {
           if (s.empty())
           {
               return -1;
           }
           return myVector.back().second;
       }
       
       /*returns poped element from stack*/
       int pop()
       {
           if (s.empty())
           {
               return -1;
           }
           int x = s.top();
           s.pop();
           myVector.pop_back();
           return x;
       }
       
       /*push element x into the stack*/
       void push(int x)
       {
           if (myVector.empty())
           {
               pair <int, int> p;
               p.first = x;
               p.second = x;
               myVector.push_back (p);
               s.push (x);
           }
           else
           {
               pair <int, int> p;
               p.first = x;
               p.second = min(x, myVector.back().second);
               myVector.push_back (p);
               s.push (x);
               
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends