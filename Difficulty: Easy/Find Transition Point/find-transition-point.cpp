//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        
        
           int low =0;
        int high = n-1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(arr[mid] == 1 && arr[mid-1] == 0)
            {
                return mid;
            }
            else if(arr[mid] < 1)
            {
                low = mid+1;
            }
            else 
            {
                high = mid -1;
            }
        
        }
        return -1;
        
        // my code here
        // int start=0;
        // int end=n-1;
        // int mid;
        // int ans=0;
        
        //     if(arr[start]==1){
        //     return 0;
        // }
        
        // while(start<end)
        // {
        //     mid=(start+end)/2;
        //     if(arr[mid]==1)
        //     {
        //         return mid;
        //     }
        //     else if(arr[mid]==0)
        //     {
        //         start=mid+1; // move right
        //     }
        //     else {
        //         ans=mid;
        //         end=mid-1;
        //     }
        // }
        // return -1;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends