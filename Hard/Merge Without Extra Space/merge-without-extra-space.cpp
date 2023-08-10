//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long myArray[n+m];
            
            for (int i=0; i<n; i++)
            {
                myArray[i] = arr1[i];
            }
            for (int i=n,j=0; i<n+m; i++,j++)
            {
                myArray[i] = arr2[j];
            }
            
            std::sort(myArray, myArray + n + m);
            
            for (int i=0; i<n; i++)
            {
                arr1[i] = myArray[i];
            }
            for (int i=n,j=0; i<n+m; i++,j++)
            {
                arr2[j] = myArray[i];
            }
            
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends