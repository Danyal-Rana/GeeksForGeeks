//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void dfsHelper(int node, vector<int> adjLs[], vector<int> &vis)
    {
        vis[node] = 1;
        
        for (auto i : adjLs[node])
        {
            if (!vis[i])
            {
                dfsHelper(i, adjLs, vis);
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V)
    {
        vector<int> adjLs[V];
        
        // converting matrix to list
        for (int i=0; i<V; i++)
        {
            for (int j=0; j<V; j++)
            {
                if (adj[i][j]==1 && i!=j)
                {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        
        vector<int> vis(V, 0);
        int totalComponents = 0;
        
        for (int i=0; i<V; i++)
        {
            if (vis[i] == 0)
            {
                totalComponents++;
                dfsHelper(i, adjLs, vis);
            }
        }
        
        return totalComponents;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends