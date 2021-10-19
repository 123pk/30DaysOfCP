/*
Platform :- Codechef
Contest :- Codechef Snackdown 2021 quaifier
Approach :- There are atmost m distict elements that we can generate for array 'C' , the basic idea is for a given A[i] there can be A[i] distinct mod vlaues , we will maintain
            a min heap that will store the values from 0 to n-1 , if the top value of heap is less than A[i] the give this values at that index else assign last used value to it.
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
        long long mx=0;
        vector<pair<long long,int>>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            mx=max(mx,A[i]);
            P.push_back({A[i],i});
        }
        
        sort(P.begin(),P.end());
       // set<pair<int,int>>used;
        
        priority_queue<int,vector<int>,greater<int>>Q;
        for(int i=0;i<n;++i)Q.push(i);
        
        //set<int>used;
        int last=0;
        vector<int>ans(n);
        for(int i=0;i<n;++i){
            if(Q.top()<P[i].first){
                ans[P[i].second]=Q.top();
                last=Q.top();
                Q.pop();
            }
            else{
                ans[P[i].second]=last;
            }
        }
        for(auto&x:ans)cout<<x<<" ";
        cout<<"\n";
    }
}
