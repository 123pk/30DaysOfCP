/*
Platform :- Codeforces 
Contest :- Codeforces Educational Round 115
Approach :- if any of column in both rows in blocked then we cannot reach the destination
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        char ch[2][n];
        
        for(int i=0;i<2;++i){
            for(int j=0;j<n;++j)cin>>ch[i][j];
        }
        
         
        
        int f=0;
        
        for(int i=0;i<n;++i){
            if(ch[0][i]==ch[1][i] && ch[0][i]=='1'){
                f=1;break;
            }
        }
        
        if(f==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
