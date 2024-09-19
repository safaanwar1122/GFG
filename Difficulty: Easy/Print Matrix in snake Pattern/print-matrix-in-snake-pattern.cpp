//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> ans;

           int row=matrix.size();
        int col=matrix[0].size();
        int i,j;
        for(i=0;i<row;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<col;j++)
                {
                   ans.push_back(matrix[i][j] );
                }
            }
            
            else {
                for(j=col-1;j>=0;j--)
                {
                    ans.push_back(matrix[i][j] );
                }
            }
        }
        return ans;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends