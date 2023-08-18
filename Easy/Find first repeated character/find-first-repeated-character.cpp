//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends

string firstRepChar(string s)
{
    unordered_map<char,int>mp;
    string ans="0";
    for(int i=0;i<s.length();i++)
    {
     mp[s[i]]++;
     if(mp[s[i]]>1)
     {
         ans = s[i];
         break;
     }
    }
    if(ans=="0")ans = "-1";
    return ans;
}

/*
string firstRepChar(string s)
{
    int n=s.size();
     
    string ans = "-1";
    int index=INT_MAX;
     
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(s[j]==s[i] && j<index)
           {
               index = j;
               ans = s[j];
               break;
           }
        }
    }
     
    return ans;
     
}

*/