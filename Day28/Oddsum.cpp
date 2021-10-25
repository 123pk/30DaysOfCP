/*
Platform :- Codechef
Contest :- Octobers Cook off 2021
Approach :- The array of that type is 1,0,2,4,6,...all even numbers so for n less than 3 we have 1 as sum while for all other values is (n-2)(n-1) + 1, sum_of_(n-2)even number+sum of firs 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        long long ans=1;
        if(n==1)cout<<ans<<"\n";
        else if(n==2)cout<<ans<<"\n";
        else{
            long long z=n-2;
            z*=(z+1);
            ans+=z;
            cout<<ans<<"\n";
        }
        
         
    }
}
