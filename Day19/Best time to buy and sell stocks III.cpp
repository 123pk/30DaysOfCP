/*
Platform :- Leetcode
Approach :- Since we can do atmost 2 transaction we can explot this , first find the max profit we can make in case of 1 transaction and now for store prefix array and suffix array
            prix[i] gives us the smallest values till ith index and suff[i] gives us the biggest values till ith index . Now make one more array which store the max profit till ith
            index and that can be max of all values of ( prices[j] - pref[j] )  for ( 0 <= j <= i) , and now do a final traversal where you will make partition array into two 
            ( 0 to i ) and (i+1 to n-1 ) for all ( 0 <= i <n-1 ) and find the max of ans and sum of max of two sub arrays .
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>pref(n),suff(n);
        int mx=0,mn=INT_MAX;
        
        for(int i=0;i<n;++i){
            mn=min(mn,prices[i]);
            pref[i]=mn;
        }
        
        for(int i=n-1;i>=0;--i){
            mx=max(mx,prices[i]);
            suff[i]=mx;
        }
        
        int ans=0;
        //now for eah index find this find he max of one transaction
        // and also store the max profit he can make till ith index
        
        vector<int>maxl(n);
        for(int i=0;i<n;++i){
            ans=max(ans,prices[i]-pref[i]);
            maxl[i]=ans;
        }
         
        //here partitioning array into two ( 0 to i) and (i+1 ,n) and findig the sum of max profit
        //in two
        for(int i=0;i<n-1;++i){
            ans=max(ans,maxl[i] + suff[i+1]-prices[i+1]);
        }
        return ans;
    }
};
