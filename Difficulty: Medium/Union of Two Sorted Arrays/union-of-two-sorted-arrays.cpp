//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
    //   vector<int> result;
    //     for(int i=0;i<n;i++)
    //     {
    //         result.push_back(arr1[i]);
    //     }
        
        
        
    //     for(int i=0;i<m;i++)
    //     {
    //         if(arr2[i]!=result[i])
    //         {
    //             result.push_back(arr2[i]);
    //         }
    //     }
    //     return result;
    
     vector<int> result;
    unordered_set<int> seen;

    // Add elements from arr1 to result if not already added
    for (int i = 0; i < n; i++) {
        if (seen.find(arr1[i]) == seen.end()) {
            result.push_back(arr1[i]);
            seen.insert(arr1[i]);
        }
    }

    // Add elements from arr2 to result if not already added
    for (int i = 0; i < m; i++) {
        if (seen.find(arr2[i]) == seen.end()) {
            result.push_back(arr2[i]);
            seen.insert(arr2[i]);
        }
    }

    // Optional: sort the result if you want a sorted union
    sort(result.begin(), result.end());

    return result;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends