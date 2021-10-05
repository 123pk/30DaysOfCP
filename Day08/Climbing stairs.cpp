/*
Platform :- Leetcode
Approach :- It is a standard dp problem where no_of_way to reach 'ith' step is ( no_of_ways_to reach 'i-1'+'i-2')  or (dp[i] = dp[i-1]+dp[i-2] ) where dp[0]=dp[1]=1;
*/
