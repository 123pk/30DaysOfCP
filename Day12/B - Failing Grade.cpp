/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 222
Approach :- while taking input check and count values if they are less than 'p'
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    
    int A[n];
    int c=0;
    for(int i=0;i<n;++i){
        cin>>A[i];
        if(A[i]<p)c++;
    }
    cout<<c<<"\n";
}
