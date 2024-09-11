//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
       vector<int> positive;
       vector<int> negative;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]<0)
           {
               negative.push_back(arr[i]);
               
           }
           else {
               positive.push_back(arr[i]);
           }
       }
       
       int k=0;
       for(int i=0;i<positive.size();i++)
       {
           arr[k]=positive[i];
           k++;
       }
        for(int i=0;i<negative.size();i++)
       {
           arr[k]=negative[i];
           k++;
       }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends