/*
Platform :- Codeforces 
Contest :- Codeforces Educational Round 115
Approach :- Find the number of students that are interested in taking classes on 'ith' day out of 5 days, now take all those days in account where no of studetns is >= half ( n/2 )
            now look for all the pairs of days and check if total( summation of ) no of unique students interested in learning that day is equal to 'n' or not , if 'n' then yes we 
            can get two groups of equal size and on different days .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>temp[5];
        vector<vector<int>>A(n,vector<int>(5,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<5;++j){
                cin>>A[i][j];
                if(A[i][j])temp[j].push_back(i);
            }
        }
        
        int f=0;
        int mn=n/2;
        set<int>used;
        vector<int>z,z2;
        for(int i=0;i<5;++i){
            if(temp[i].size()>=mn)z.push_back(i);
        }
        
        for(int i=0;i<z.size();++i){
            
            for(int j=i+1;j<z.size();++j){
                used.clear();
                for(auto &x:temp[z[j]]){
                    used.insert(x);
                }
                
                for(auto&x:temp[z[i]])used.insert(x);
                if(used.size()==n){
                    f=1;break;
                }
            }
            if(f)break;
        }
        
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
