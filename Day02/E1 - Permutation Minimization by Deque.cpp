/*
Platform :- Codeforces
Contest :- Codeforces Contest 744 Div 3
Approach :- Use a array of size 2*n and store the first element at index 'n' and maintain two pointer 'l' and 'r' where 'l' store the leftmost element and 'r' store the right most
            element , now when we get any new element we compare with the element at 'l' if ( A['l'] > curr_Val) then we add it the front and decrement 'l' else we add to the end
            and increment 'r' . Now print the array.
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
         for(int i=0;i<n;++i){
             cin>>A[i];
         }
         
         vector<int>ans(2*n);
         int l=n,r=n;
        
         for(int i=0;i<n;++i){
             if(i==0)ans[l]=A[i];
             else{
                 if(ans[l]>A[i]){
                     l--;
                     ans[l]=A[i];
                 }
                 else{
                     r++;
                     ans[r]=A[i];
                 }
             }
         }
         
         for(int i=l;i<=r;++i)cout<<ans[i]<<' ';
         cout<<"\n";
    }
}
