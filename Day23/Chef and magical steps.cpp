/*
Platform :- Codechef
Contest :- Codechef starters 16 (unrated Div 2)
Approach :- Firt precalculate all the primes till 10^7 and also precalculate the cost of reaching each step starting from step 1,now for given x and y , ans is (ans[y]-ans[x+1])+1
*/
#include<bits/stdc++.h>
using namespace std;

/*
  2 3 4 5 6 7 8 9 10
  1 1 2 2 3 3 4 5 6
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int mx=10000000;
    
    vector<int>P(mx+1,1);
    P[1]=P[0]=0;
    for(int i=2;i*i<=mx;++i){
        if(P[i]==1){
            for(int j=i*i;j<=mx;j+=i){
                P[j]=0;
            }
        }
    }
    
    vector<int>ans(mx+1);
    ans[0]=0;
    ans[1]=0;
    ans[2]=1;
    ans[3]=1;
    for(int i=4;i<=mx;++i){
        if(P[i]){
            ans[i]=ans[i-2]+1;
        }
        else ans[i]=ans[i-1]+1;
    }
    
    int t;
    cin>>t;
    
    while(t--){
        int x,y;
        cin>>x>>y;
   //     cout<<ans[x]<<" "<<ans[y]<<" ";
        cout<<(ans[y]-ans[x+1])+1<<"\n";
    }
}
