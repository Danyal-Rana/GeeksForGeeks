//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids)
    {
        stack<int> myStack;
        vector<int> myVector;
        
        for (int i=0; i<N; i++)
        {
            if (myStack.empty() || asteroids[i]>0)
            {
                myStack.push (asteroids[i]);
            }
            else
            {
                while (!myStack.empty() && myStack.top()>0 && (abs(asteroids[i])>myStack.top()))
                {
                    myStack.pop();
                }
                if (myStack.empty() || myStack.top()<0 && asteroids[i]<0)
                {
                    myStack.push (asteroids[i]);
                }
                else if (abs(asteroids[i])==myStack.top())
                {
                    myStack.pop();
                }
                else 
                {
                    continue;
                }
            }
        }
        
        while (!myStack.empty())
        {
            myVector.push_back (myStack.top());
            myStack.pop ();
        }
        
        reverse (myVector.begin(), myVector.end());
        return myVector;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends