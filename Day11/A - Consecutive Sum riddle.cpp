/*
Platform :-Codeforces
Contest :- Codeforces Round 747
Approach :- for acheiving any sum 'n' we can use (-(n-1) to n) range as all the -ve values will cancel out all the positive values till (n-1) and at the end we will have 'n' only
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
         long long n;
         cin>>n;
         
         cout<<(-(n-1))<<" "<<n<<"\n";
        
    }
}
