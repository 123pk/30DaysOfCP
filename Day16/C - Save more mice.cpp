/*
Platform :- Codeforces
Contest :- Codeforces Round 748 Div 3
Approach :- sort the values in decreasing order and start with first value after sorting if the time taken to get to his turn is >= A[i] then cat can eat him else he will reach
           the hole and time take +=(n-A[i]).
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        int k;
        cin>>n>>k;
        
        long long A[k];
        for(int i=0;i<k;++i)cin>>A[i];
        
        sort(A,A+k,greater<long long>());
        
        int f=0;
        int ans=0;
        
        long long d=0;
        for(int i=0;i<k;++i){
            if(f)break;
            else{
                if(d>=A[i]){
                    f=1;
                }
                else ans++;
                d+=(n-A[i]);
            }
        }
      //  cout<<ans<<" "<<t<<endl;
        cout<<ans<<"\n";
    }
}
