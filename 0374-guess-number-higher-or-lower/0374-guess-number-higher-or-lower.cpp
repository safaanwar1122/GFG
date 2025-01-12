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
        // int start=1, end=n, mid;
        // while(start<=end)
        // {
        //     mid=(start+ (end-start/2));
        //     int result=guess(mid);
        //         if(result==0)
        //         {
        //             return mid;
        //         }
        //      else   if(result==-1)
        //        {
        //         //move left
        //         end=mid-1;
        //        }
        //      else 
        //        {
        //         // move right
        //         start=mid+1;
        //        }
        //     }
            
            
        //     return -1;
         int low = 1; // The range starts from 1, not 0.
        int high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Avoid potential overflow with (low + high) / 2.
            int result = guess(mid); // Call the guess API to check.

            if (result == 0) { 
                return mid; // The correct number is found.
            } else if (result < 0) { 
                high = mid - 1; // Guess is too high, search in the lower half.
            } else { 
                low = mid + 1; // Guess is too low, search in the upper half.
            }
        }
        return -1; // T
    }
};