/*
Platform :- Leetcode
Contest :- Weekly contest 263
Approach :- since the value of n is 16 , we will try every subset and check store the frequency of the "OR" values of that subset at the end we will return the count of max value
*/
class Solution {
public:
   
    int countMaxOrSubsets(vector<int>& nums) {
        map<int,int>P;
        int n=nums.size();
        for(int i=1;i<=(1<<n);++i){
            int val=0;
            for(int j=0;j<n;++j){
                if(i&(1<<j)){
                    val|=nums[j];
                }
            }
            P[val]++;
        }
        
        return P.rbegin()->second;
    }
};
