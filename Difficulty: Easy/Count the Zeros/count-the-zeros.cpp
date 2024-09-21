//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
//          int n = nums.size();
//         int start=0;int end=n-1;int first=-1;int mid;
//         int target =0;
       
//       // first occurance 
//         while(start<=end)
//         {
//             mid=start+(end-start)/2;
//          if(nums[mid]==target)
//          {
//             first=mid;
//             end=mid-1;
//          }
//          else if(nums[mid]>target)
//          {
//             start=mid+1;
//          }
//          else {
//             end=mid-1;
//          }
//         }
//  if (first == -1) {
//         return 0;
//     }
//         return (n-first);

 int n = arr.size();
    int start = 0, end = n - 1, mid;
    int firstZero = -1;

    // Binary search to find the first occurrence of 0
    while (start <= end) {
        mid = start + (end - start) / 2;
        
        if (arr[mid] == 0) {
            firstZero = mid;    // Mark this as the first zero
            end = mid - 1;      // Try to find an earlier zero
        } else {
            start = mid + 1;    // Look for zeroes in the right half
        }
    }

    // If no 0 was found, return 0
    if (firstZero == -1) {
        return 0;
    }

    // The count of 0's is the number of elements after the first zero
    return n - firstZero;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.countZeroes(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends