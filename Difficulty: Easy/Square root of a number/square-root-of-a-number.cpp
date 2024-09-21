//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        int start=1; int end=n;
        long long mid; int ans;
         if (n == 0) return 0; 
        while(start<=end)
        {
            mid = start + (end - start) / 2;

            if(mid*mid<=n)
            {
                ans=mid;
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends