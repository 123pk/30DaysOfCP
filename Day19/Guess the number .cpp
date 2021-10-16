/*
Platform :- Leetcode
Approach :- Do basic binary search and check for all mid values , start = 1, end = n , and for finding mid and avoiding interger overflow use ( mid = (end-start)/2 + start )
*/
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int c;
        int s=1,e=n,m=(e-s)/2+s;
        if(!guess(n))return n;
        if(!guess(1))return 1;
        
        while(1){
            c = guess(m);
            if(c==0)break;
            else if(c==1){
                s=m;
                m=(e-s)/2 + s;
            }
            else{
                e=m;
                m=(e-s)/2 + s;
            }
        }
        return m;
    }
};
