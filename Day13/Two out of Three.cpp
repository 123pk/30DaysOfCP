/*
Platform :- Leetcode
Contest :- Leetcode Weekly Contest 262
Approach :- store each element of all the three array in set and also store frequency using map and now itterate through set and if the frequency of element is >=2 add to answer.
*/
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        map<int,int>unq1,unq2,unq3;
         set<int>val;
        for(auto &x:nums1){
            unq1[x]=1;
            val.insert(x);
        }
        for(auto &x:nums2){
            unq2[x]=1;
            val.insert(x);
        }
        for(auto &x:nums3){
            unq3[x]=1;
            val.insert(x);
        }
        
       
        for(auto& x:val){
            if((unq1[x]+unq2[x]+unq3[x])>=2)ans.push_back(x);
        }
        
        return ans;
    }
};
