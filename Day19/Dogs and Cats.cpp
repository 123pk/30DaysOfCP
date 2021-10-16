/*
Platform :- Coding competitions with google
Approach :- maintain a vis array to store the indexes that you have visited and traverse through the array and check if you can feed the current animal or not and mark it if 
            you feeded it else break and run a loop from 0 to n-1 and check if all the indexes with dogs are feeded or not . If not print "YES" else "NO"
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        int n,d,c,m;
        cin>>n>>d>>c>>m;
        
        string s;
        cin>>s;
        
        int f=0;
        vector<int>vis(n);
        for(int i=0;i<n;++i){
            if(s[i]=='D'){
                if(d){
                    d--;
                    c+=m;
                    vis[i]++;
                }
                else{
                    f=1;break;
                }
            }
            else{
                if(c){
                    c--;
                }
                else break;
            }
        }
        
        for(int i=0;i<n;++i){
            if(s[i]=='D' && vis[i]==0){
                f=1;break;
            }
        }
        
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
