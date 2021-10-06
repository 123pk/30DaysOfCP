/*
Platform :- Leetcode
Subtask :- Solve in O(n) time 
Approach :- As the value in array is in range ( 1 to 10^5 ) then we can use a frequency of array of size n+1 and store the frequency of each element in array and its runtime is 
            O(n) in worst case now we will traverse through frequency array and if the frequency of element is greater than '1' then we add it to answer array .
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        vector<int>temp(n+1);
        for(int i=0;i<nums.size();++i){
            temp[nums[i]]++;
        }
        
        for(int i=1;i<=n;++i){
            if(temp[i]>1)ans.push_back(i);
        }
        
        return ans;
    }
};
