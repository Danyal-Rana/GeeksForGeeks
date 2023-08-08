//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N)
    {
        int m = N;
        int myCounter = 0;
        int myDigit;
        
        while (N>0)
        {
            myDigit = N%10;
            N = N/10;
            
            if (myDigit == 0)
                continue;
            else if (m%myDigit == 0)
                myCounter++;
        }
        return myCounter;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends