/*
Platform :- Codeforces
Contest :- ICPC WF Moscow Invitational Contest - Online Mirror (Unrated, ICPC Rules, Teams Preferred)
Approach :- 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,p;
        cin>>n>>p;
        
        int c=0,d=0,temp=0;
        
        while(1){
            d=pow(2,c);
            if(d<p){
                temp=c;
            }
            else break;
            c++;
        }
        
        long long z=pow(2,n)-1;
        long long rem=pow(2,temp);
        z-=rem;
        //cout<<z<<" "<<rem<<" "<<temp<<endl;
        long long x=z/p;
        if(z%p)x++;
        x+=(temp+1);
        cout<<x<<"\n";
    }
}
