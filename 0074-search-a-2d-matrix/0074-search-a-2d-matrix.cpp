class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int N=matrix.size();//row size
      int M=matrix[0].size();
      int row_index, col_index,start=0,end=N*M-1,mid;
      while(start<=end)
      {
        mid=start+(end-start)/2;
        row_index=mid/M;
        col_index=mid%M;
        if(matrix[row_index][col_index]==target)
        {
            return 1;
        }
        else if(matrix[row_index][col_index]<target)
        {
            start=mid+1; //right move 
        }
        else {
            end=mid-1; //left move 
        }
      }
        return 0;
    }
};