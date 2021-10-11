/*
Platform :- Codeforces 
Contest :- Codeforces Educational Round 115
Approach :- let sum  = sum of all elements of array , now if (sum*2)% n !=0  then we don't have any pair , we just need basic math on mean formulae to deduce this relaion
            now else we use map to find pairs (i,j) where sum of them is equal to (z = (sum * 2) / n ) . Count of those pairs is equal to (count[A[i]]*count(A[j]) if A[i]!=A[j]
            else we have ( count[A[i]] *( count[A[i]]-1) / 2)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        
        long long A[n];
        map<long long,long long>P;
        long long tot=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
            P[A[i]]++;
        }
        
        if((tot*2)%n)cout<<0<<"\n";
        else{
            long long z=tot*2;
            if(z%n){
                cout<<"0\n";
                continue;
            }
            z/=n;
            //cout<<z<<" \n";
            long long ans=0;
            set<pair<long long,long long>>used;
            long long temp=0;
            for(int i=0;i<n;++i){
                temp=z-A[i];
                if(temp<0)continue;
                
                if(P[A[i]]>0){
                    if(P[temp]>0){
                        used.insert({min(A[i],temp),max(A[i],temp)});
                    }
                }
            }
            
            for(auto &x:used){
                if(x.first==x.second){
                    temp=P[x.first];
                    temp*=(temp-1);
                    temp/=2;
                    ans+=temp;
                }
                else{
                    temp=P[x.first];
                    temp*=P[x.second];
                    ans+=temp;
                }
            }
            
            cout<<ans<<"\n";
        }
        
    }
}
