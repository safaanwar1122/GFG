//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
          int rowSize=arr.size();
         int colSize=arr[0].size();
         
         int prev=0;
         int index=0;
         for(int i=0;i<rowSize;i++)
         {
             int current=0;
             for(int j=0;j<colSize;j++)
             {
                 if(arr[i][j]==1)
                 {
                     current++;
                 }
                
                
             }
              if(current>prev)
                 {
                     prev=current;
                     index=i;
                 }
             
           
         }
           if(prev==0){return -1;}
         
         return index;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends