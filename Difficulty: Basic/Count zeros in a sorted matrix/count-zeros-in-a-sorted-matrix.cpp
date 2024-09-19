//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int count=0;
		int row=A.size();
		int col=A[0].size();
		int i,j;
		for(i=0;i<row;i++)
		{
		    for(j=0;j<col;j++)
		    {
		        if(A[i][j]==0)
		        {
		            count++;
		        }
		    }
		}
		return count;

	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends