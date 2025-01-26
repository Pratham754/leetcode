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
        int left = 1, right = n;
        int mid = left + (right - left)/2;
        while(left<=right){
            int temp = guess(mid);
            if(temp==0) return mid;
            else if(temp == -1){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
            mid = left + (right - left)/2;
        }
        return -1;
    }
};