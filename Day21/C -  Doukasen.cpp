/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 223
Approach :- Find the total_time taken to travel whole distance which is sum(A[i]/B[i]) now the time of collision is (total_time/2) , now total distance travelled in
            this time is our answer.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long double tot=0;
    vector<pair<long double,long double>>P;
    for(int i=0;i<n;++i){
        long double a,b;
        cin>>a>>b;
        P.push_back({a,b});
        tot+=(a/b);
    }
    tot/=2;
    //this gives us the collidig time 
    //now we will move from 0 to n-1 and will find the distance travelled from left where they can reach in 
    // that time
    
    long double ans=0;
    for(int i=0;i<n;++i){
        long double a = P[i].first/P[i].second;
        a=min(a,tot);
        tot-=a;
        ans+=(a*P[i].second);
    }
    
    cout<<to_string(ans)<<"\n";
}
