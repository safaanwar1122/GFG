//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        // 
       long long count=0;
        // using Bubble Sort to sort array first 
        for(int i=n-2;i>=0;i--)
        {
           for( int j=0; j<=i;j++)

{
    if(arr[j]>arr[j+1])
    {
       swap( arr[j],arr[j+1]);
    }
}        }
// using pointer  approach to find sum 

for (int i = 0; i < n - 2; i++) {  // The outer loop should run till n - 2 to avoid out-of-bounds
    int start = i + 1;
    int end = n - 1;
    
    while (start < end) {  // Modified condition to strictly '<' because we don't want to include duplicates
        if (arr[i] + arr[start] + arr[end] < sum) {
            // All triplets from (arr[i], arr[start], arr[start + 1], ..., arr[end]) are valid
            count += (end - start);  // Increment count by the number of valid pairs
            start++;  // Move start to the right
        } else {
            end--;  // Move end to the left to reduce the sum
        }
    }
}
return count;

        
        // for(int i=0;i<n-3;i++)
        // {
        //     int start=i+1;
        //     int end=n-1;
        //     while(start<end)
        //     {
        //         if(arr[i]+arr[start]+arr[end]<sum)
        //         { count += (end - start); 
                    
        //             start++;
        //         }
        //         else {
        //             end--;
        //         }
        //     }
        // }
        // return count;

    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum;
        cin >> n >> sum;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countTriplets(n, sum, arr);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends