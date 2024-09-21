class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Ttranspose code 
        int n=matrix.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse Code
        for(int i=0;i<n;i++)
        {
            int start=0; int end=n-1;
            while(start<end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++; 
                end--;
            }


        }
    }
};