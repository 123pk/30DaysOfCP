/*
Platform :- Codechef 
Contest :- Codechef Starter 15
Approach :- There are on 9 digits so for each index check for next 9 index if you find any index that satisfy our condition then increment answer
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int ans=0;
        int lim=0;
        for(int i=0;i<n;++i){
            lim=max(9-(s[i]-'0'),s[i]-'0');
            for(int j=1;(i+j)<n && lim;++j){
                if(abs(s[i+j]-'0'-(s[i]-'0'))==j)ans++;
                lim--;
            }
        }
        
        cout<<ans<<"\n";
    }
}
