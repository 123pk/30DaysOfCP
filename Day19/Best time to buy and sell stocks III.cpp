/*
Platform :- Leetcode
Approach :- Since we can do atmost 2 transaction we can explot this , first find the max profit we can make in case of 1 transaction and now for store prefix array and suffix array
            prix[i] gives us the smallest values till ith index and suff[i] gives us the biggest values till ith index . Now make one more array which store the max profit till ith
            index and that can be max of all values of ( prices[j] - pref[j] )  for ( 0 <= j <= i) , and now do a final traversal where you will make partition array into two 
            ( 0 to i ) and (i+1 to n-1 ) for all ( 0 <= i <n-1 ) and find the max of ans and sum of max of two sub arrays .
*/
