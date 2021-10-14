/*
Platform :- Codeforces
Contest :- Codeforces Round 748 Div 3
Approach :- You need to analyse it then you will find there is only one case when we have no solution and it is when all the elemnts are equal else the ans is the gcd of all values
            A[i]-A[0] for i>0 ,
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        for(int i=0;i<n;++i)cin>>A[i];
        
        sort(A,A+n);
        
        if(A[0]==A[n-1]){
            cout<<-1<<"\n";
            continue;
        }
        int ans=0;
        int first=A[0];
        for(int i=1;i<n;++i){
            if(i==1)ans=A[i]-first;
            else ans=__gcd(ans,A[i]-first);
        }
        cout<<ans<<"\n";
    }
}
