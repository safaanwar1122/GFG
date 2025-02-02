/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start=1, end=n, mid;
        while(start<=end)
        {
            mid=start+ (end-start)/2;
            int result=guess(mid);
                if(result==0)
                {
                    return mid;
                }
             else   if(result<0)
               {
                //move left
                end=mid-1;
               }
             else 
               {
                // move right
                start=mid+1;
               }
            }
            
            
            return -1;
    }
};