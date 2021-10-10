/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 262
Approach :- First check if given array and 'x' are valid and has solution or not . We will have solution if all the element give same value when we do modulo with 'x' else return -1.
            now we will take all the elements of grid and store in vector and sort it and choose the middle element of vector and convert all elements to that elements and find the cost
            it is going to be our answer.
*/
class Solution {
public:
    
    int find(vector<int>&temp,int x,int y){
        int tot=0;
        for(int i=0;i<temp.size();++i){
            tot+=(abs(temp[i]-temp[x]))/y;
        }
        
        return tot;
    }
    
    int minOperations(vector<vector<int>>& grid, int y) {
        int ans=-1;
        int f=0;
        vector<int>temp;
        int mn=INT_MAX;
        int mx=0;
        long long tot=0;
        for(auto &x:grid){
            for(auto&z:x){
                mn=min(mn,z);
                mx=max(mx,z);
                temp.push_back(z);
                tot+=z;
            }
        }
        if(temp.size()==1)return 0;
        int g=-1;
        for(auto &x:temp){
            if(g==-1)g=x%y;
            else{
                //cout<<g<<" "<<x%y<<endl;
                if(g!=(x%y)){
             //       cout<<" ** ";
                    return -1;
                }
            }
        }
        sort(temp.begin(),temp.end());
        
        int n=temp.size();
        int mid=0;
        if(n%2==0){
            mid=(n+1)/2;
            ans=find(temp,mid,y);
            ans=min(ans,find(temp,mid-1,y));
        }
        else {
            mid=n/2;
            ans=find(temp,mid,y);
        }
        
        
        
            return ans;
    }
};
