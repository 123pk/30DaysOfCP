/*
Platform :- Codeforces
Contest :- Codeforces Round #744 Div 3
Approach :- If ( no_of_'A'+ no_of_'C' == no_of_'B' ) then we can get an empty array on operations.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        map<char,int>P;
        for(auto x:s)P[x]++;
        
        int temp=P['B'];
        int temp2=P['A']+P['C'];
        if(temp2==temp)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
