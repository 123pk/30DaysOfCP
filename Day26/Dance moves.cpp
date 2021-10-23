/*
Platform :- Codechef
Contest :- Codechef Snackdown Round 1A
Approach :- If x>y then we can only go backward and it will take (x-y)steps , else we can go forward by "abs(x-y)" if it is divisible by "2" else we need to move one "(x-y)/2+1"
            and then come backward.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     
     while(t--){
         long long x,y;
         cin>>x>>y;
         
         long long dist=abs(x-y);
         long long ans=0;
         if(x>y)ans=dist;
         else{
             ans=dist/2;
             if(dist%2)ans+=2;
         }
         
         cout<<ans<<"\n";
     }
}
