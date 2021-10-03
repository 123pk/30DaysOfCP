/*
Platform :- Leetcode
Contest :- Leetcode weekly contest 261
Approach :- first find the total sum of array of size m , for a mean of 'k' from array of size (m+n) , total sum of n element array is ((k*(m+n))-tot1) where tot1 is sum of array 
            of size 'm' , now we know sum of 'n' size array , we also know range of sum we can get from 'n' values that is ( 'n' to 6*'n' ) if the sum is in this range then we can
            get it else we return empty array. Now we greedily choose and distribute each element some value between 1 and 6 accordingly.
*/
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>ans;
        int tot=0;
        int m=rolls.size();
        for(int i=0;i<rolls.size();++i){
            tot+=rolls[i];
        }
        
        mean*=(n+m);
        
        int temp = mean-tot;
        int z = 6*n;
        if(z<temp || n>temp)return ans;
       // cout<<temp<<' '<<n<<"\n";
        z = temp/n;
        if(temp%n)z++;
        
        int sum=0;
        for(int i=1;i<=n;++i){
            if(temp-(sum+z)>=(n-i)*(z-1)){
                ans.push_back(z);
                sum+=z;
            }
            else{
                z--;
                ans.push_back(z);
            }
        }
        return ans;
        
    }
};
