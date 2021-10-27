/*
Platform :- Leetcode
Approaach:- make a array of size 3 , now store the frequency of 0,1 and 2 in it now run a loop from ( 0 to nums.size()-1 ) and if frequency of 0 is not '0' store nums[i]=0 and decrease
            its frequency else move to '1' and do the same.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>z(3);
        for(auto &x:nums)z[x]++;
        int j=0;
        for(int i=0;i<nums.size();++i){
            if(z[j])nums[i]=j;
            else{
                j++;
                if(z[j])nums[i]=j;
                else {
                    j++;
                    nums[i]=j;
                }
            }
            z[j]--;
        }
    }
};
