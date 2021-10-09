/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 222
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    if(s.size()==4)cout<<s<<"\n";
    else {
        for(int i=1;i<=(4-s.size());++i)cout<<"0";
        cout<<s<<"\n";
    }
}
