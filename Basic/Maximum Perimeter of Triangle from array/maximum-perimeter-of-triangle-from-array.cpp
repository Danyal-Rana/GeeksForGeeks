//{ Driver Code Starts
// Efficient solution to find
// out maximum perimeter triangle which
// can be formed using the elements
// of the given array
#include <iostream>
#include <algorithm>

using namespace std;

// Function to find out maximum perimeter
int maxPerimeter(int arr[], int n);


// Driver Program
int main()
{
	int t,n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout << maxPerimeter(arr,n) << endl;
    }
	return 0;
}


// } Driver Code Ends


int maxPerimeter(int arr[], int n)
{
    int perimeter = -1;
    
    sort (arr, arr+n);
    
    for (int i=n-2; i>=1; i--)
    {
        if (arr[i-1]+arr[i] > arr[i+1])
        {
            perimeter = arr[i-1]+arr[i]+arr[i+1];
            break;
        }
    }
    
    return perimeter;
}