/*
Platform :- Leetcode
*/
class Solution {
public:
    int maxProfit(vector<int>& price){
        //we do things in reverse 
        //max value for i -- n is some [x] + dp[i+z]
        //dp[n-1]=0
        //dp[n-2]=max(0,prices[i+1]-price[i])
        int n = price.size();
        vector<int>dp(n);
        
        dp[n-1]=0;
        if(n==1)return dp[0];
        
        dp[n-2]=max(0,price[n-1]-price[n-2]);
        
        if(n==2)return dp[0];
        
        for(int i=n-3;i>=0;--i){
            //find some x for some index j and add with dp[j+2]
            dp[i]=dp[i+1];
            for(int j=i+1;j<n;++j){
                if((j+2)<n){
                    dp[i]=max(dp[i],max(0,price[j]-price[i])+dp[j+2]);
                }
                else{
                    dp[i]=max(dp[i],max(0,price[j]-price[i]));
                }
            }
        }
        
        return dp[0];
    }
};
