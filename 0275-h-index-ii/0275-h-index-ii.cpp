class Solution {
public:
    int hIndex(vector<int>& citations) {
        int start=0, end=citations.size()-1,mid;
        int n=citations.size();
        while(start<=end)
        {mid=start+(end-start/2);
            if(citations[mid]>=n-mid)
            {
                end=mid-1;
            }
           
            else {
                // right
                start=mid+1;
            }
        }
        return n-start;
    }
};

/* Why move left when citations[mid] >= n - mid?
If citations[mid] >= n - mid, this means:

1.We have found mid where citations[mid] is at least n - mid.
2.There might be a better (higher) h-index in the left half, 
so we move left (end = mid - 1).
3Q.Why return n - start?
ANS: When the binary search ends, start is at the smallest mid index 
where citations[mid] >= n - mid. The correct h-index is then:
h=n−start.*/
