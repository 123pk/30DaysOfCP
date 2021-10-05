/*
Platform :- Leetcode
Approach :- It is a standard dp problem where no_of_way to reach 'ith' step is ( no_of_ways_to reach 'i-1'+'i-2')  or (dp[i] = dp[i-1]+dp[i-2] ) where dp[0] = dp[1] = 1;
*/
class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1);
        
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;++i)dp[i]=dp[i-1]+dp[i-2];
        
        return dp[n];
    }
};
