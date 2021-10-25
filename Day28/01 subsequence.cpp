/*
Platform :- Codechef
Contest :- Codechef October Cook off  2021
Approach :- Best strategy is to order elements at odd position in decreasing order and elements at even postion in increasing order , now for finding the total number of subsequence
            count total of even position element sum and run a loop from 0 to n-1 for all  odd poisitoin number of 01 subsequence position is (odd[i]*total_evel_elemts_from(i+1 to n))
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         vector<int> odd,eve;
         int A[n];
         for(int i=0;i<n;++i){
             cin>>A[i];
             if(i%2==0)odd.push_back(A[i]);
             else eve.push_back(A[i]);
         }
         
         sort(odd.begin(),odd.end(),greater<int>());
         sort(eve.begin(),eve.end());
         
         vector<int>pref;
         int tot=0;
         for(int i=0;i<eve.size();++i)tot+=eve[i];
         
         long long ans=0,val=0;
         for(int i=0;i<odd.size();++i){
             val=odd[i];
             val*=tot;
             ans+=val;
             if(i<eve.size())tot-=eve[i];
         }
         int j=0,k=0;
         for(int i=0;i<n;++i){
             if(i%2==0){
                 cout<<odd[j]<<" ";
                 j++;
             }
             else {
                 cout<<eve[k]<<" ";
                 k++;
             }
         }
         cout<<"\n"<<ans<<"\n";
         
    }
}
