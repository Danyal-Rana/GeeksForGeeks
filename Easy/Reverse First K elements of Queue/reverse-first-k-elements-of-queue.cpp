//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> myStack;
    int a = k;
    
    while (a!=0)
    {
        myStack.push (q.front());
        q.pop();
        a--;
    }
    
    while (!myStack.empty())
    {
        q.push (myStack.top());
        myStack.pop();
    }
    
    a = q.size()-k;
    
    while (a != 0)
    {
        q.push (q.front());
        q.pop();
        a--;
    }
    
    return q;
}