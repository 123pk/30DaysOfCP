/*
Platform :- Codeforces
Contest :- Codeforces Contest 746 Div 2
Approach :- so we need only two greatest values of array and we can simulatneously take one of them and use them .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        long long h;
        cin>>n>>h;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        sort(A,A+n,greater<long long>());
        long long temp=A[0]+A[1];
        long long ans=h/temp;
        ans*=2;
       // cout<<ans<<" ";
        long long z=h%temp;
       // cout<<z<<" ";
        if(z<=A[0] && 1<=z)ans++;
        else if(z)ans+=2;
        cout<<ans<<"\n";
    }
}
