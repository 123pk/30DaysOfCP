/*
Platform :- Codechef
Contest :- Codechef Snackdown Round 1A
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n,k;
        cin>>n>>k;
        
        long long z=n*(n-1);
        z=z>>1;
        long long temp=(n-k);
        temp*=(temp-1);
        temp>>=1;
        long long ans=(z-temp)/k; 
        ans*=2;
        cout<<ans<<"\n";
    }
}
