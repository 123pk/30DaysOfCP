/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 264
Approach :- first store all the numerically balanced values till 7777777, as this is enough for solving the problem, now for all values <10^5 we can bruteforce from some numerically
            balanced value greater than 'n' to the time (i>n) .  else for value greater than 10^5 there are not much option like for value greater than 666666 we can have only one value
            11224444 as our answer , for other we look for options like for value greater than 55555, we have either permutaion of (122333) or (224444) or (155555) so we try all permutaion
            of following and select the min one.
*/
class Solution {
public:
    int nextBeautifulNumber(int n) {
        string x=to_string(n);
        int sz=x.size();
        
        vector<pair<int,int>>z;
        for(int i=1;i<=7;++i){
            int val=0;
            for(int j=1;j<=i;++j){
                val*=10;
                val+=i;
            }
            z.push_back({val,i});
        }
        
        /*int x=1<<7;
        vector<int>ans;
        for(int i=1;i<=x;++i){
            int c=0;
            for(int j=0;j<z.size();++j){
                if(i &(1<<j)){
                    c+=z[j].second;
                    if((n-z))
                }
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans[0];
        
        */
        int ans=INT_MAX,lim=7;
        for(int i=0;i<z.size();++i){
            if(z[i].first>n){
                ans=min(ans,z[i].first);
                lim=min(lim,z[i].second);
            }
        }
        
        //now descend
        
       if(lim>=6){
           int temp;string s;
           int ed=0;
           if(lim==6){
               //2 4 or 1 2 3 or 15
                s="224444";
                 ed=444422; 
                if(ed>n){
                   do{
                      temp=stoi(s);
                       if(temp>n)ans=min(ans,temp);
                       
                   }while(next_permutation(s.begin(),s.end()));
                    
                    
                }
               s="122333";
                    ed=333221;
                    if(ed>n){
                        do{
                      temp=stoi(s);
                       if(temp>n)ans=min(ans,temp);
                       
                        }while(next_permutation(s.begin(),s.end()));
                    }
               
               s="155555";
                    ed=555551;
                    if(ed>n){
                        do{
                      temp=stoi(s);
                       if(temp>n)ans=min(ans,temp);
                       
                        }while(next_permutation(s.begin(),s.end()));
                    }
                return ans;
               
           }
           else{
              ans=1224444;
           }
           
           
           
           return ans;
       }
       
        
        
        int last=1;
        int start=ans,f=0;
        int some;
        vector<int>temp(10);
        
        for(int i=start;i>=last && i>n;--i){
            for(int j=1;j<=7;++j)temp[j]=0;
            some=i;
            f=0;
            while(some){
                if(some%10>7 || some%10==0){
                    f=1;break;
                }
                temp[some%10]++;
                some/=10;
            }
            if(f)continue;
            
            for(int j=1;j<=7;++j){
                if(temp[j]){
                    if(temp[j]!=j){
                        f=1;break;
                    }
                }
            }
             if(f)continue;
            if(i>n)ans=min(ans,i);
            else break;
        }
        
        return ans;
        
    }
};
