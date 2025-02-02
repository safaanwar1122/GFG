class Solution {
public:
    int hIndex(vector<int>& citations) {
        int start=0, end=citations.size()-1,mid;
        int n=citations.size();
        while(start<=end)
        {mid=start+(end-start/2);
            if(citations[mid]>=n-mid)
            {
                end=mid-1;;
            }
           
            else {
                // right
                start=mid+1;
            }
        }
        return n-start;
    }
};