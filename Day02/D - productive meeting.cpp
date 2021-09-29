/*
Platform :- Codeforces
Contest :- Codeforces Round 744 Div 3
Approach :- We use a max heap to store all the values and we take the two max values of the heap and make pair of them and if any they becomes '0' then we leave it else we push 
            value-1 in the heap . We create max heap of pair of of values and index .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         int A[n];
         priority_queue<pair<int,int>>P;
         for(int i=0;i<n;++i){
             cin>>A[i];
             if(A[i]){
                 P.push({A[i],i+1});
             }
         }
         
         vector<pair<int,int>>ans;
         pair<int,int>temp,temp2;
         while(!P.empty()){
             temp=P.top();
             P.pop();
             
             if(P.empty())break;
             temp2=P.top();
             P.pop();
             
             ans.push_back({temp.second,temp2.second});
             temp2.first--;
             temp.first--;
             
             if(temp2.first)P.push(temp2);
             if(temp.first)P.push(temp);
         }
         
         
         cout<<ans.size()<<"\n";
         for(auto &x:ans){
             cout<<x.first<<" "<<x.second<<"\n";
         }
         
    }
}
