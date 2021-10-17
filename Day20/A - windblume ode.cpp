/*
Platform :- Codeforces
Contest :- Codeforces Round #749 (Div. 1 + Div. 2, based on Technocup 2022 Elimination Round 1)
Approach :- find the sum of all elements , if it is even then whole array is good else if it is odd prime then we need to remove one of odd values and answer is n-1 removing that one
            odd value , else in all other cases whole array is good
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<long long>A(n);
        vector<int>odd,even;
        long long tot=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
            if(A[i]%2)odd.push_back(i);
            else even.push_back(i);
        }
        
        if(tot%2==0){
            cout<<n<<"\n";
            for(int i=1;i<=n;++i)cout<<i<<" ";
            cout<<"\n";
        }
        else{
            int f=0;
            //check if it is prime or not
            for(long long i=2;i*i<=tot;++i){
                if(tot%i==0){
                    f=1;
                    break;
                }
            }
            
            if(f){
                cout<<n<<"\n";
                for(int i=1;i<=n;++i)cout<<i<<" ";
                cout<<"\n";
            }
            else{
                cout<<(n-1)<<"\n";
                for(int i=1;i<=n;++i){
                    if((odd[0]+1)==i)continue;
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
        }
    }
}
