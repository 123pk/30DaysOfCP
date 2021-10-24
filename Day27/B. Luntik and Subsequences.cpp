/*
Platform :- Codeforces
Contest :-Codeforces Round 750 Div 2
Approach :- Since we need to find those subsequences whose sum is (sum_of_array-1) so all this depend on count of '1' and count of '0' , let z = no_of_1 and x = no_of_zero
            then answer is z*(2^x)  , take care of INT overflow
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        map<long long,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]++;
        }
        
        long long ans=P[1];
        long long val=P[0];
        val=(1<<val);
        ans*=val;
        cout<<ans<<"\n";
    }
}
