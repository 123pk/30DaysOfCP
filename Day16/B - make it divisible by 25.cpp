/*
Platform :- Codeforces
Contest :- Codeforces Round 748 Div 3
Approach :- for a number to be divisible by 25 the last two digits should be divisible by 25 and incase of "00"there should be atleast one more digit in front of "00".
             so we try to find the minimum index that where we get value( 75,25,50,x00) divisible by 25 and return (n-(i+1)-2).
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        reverse(s.begin(),s.end());
        int ans=0;
        //we are looking for 00x,05,52,57
        map<char,int>P;
        
        for(int i=0;i<s.size();++i){
            //00x form
            if(s[i]=='0'){
                P[s[i]]++;
                if(P[s[i]]==2){
                    ans=(i-2)+1;
                    break;
                }
            
            }//05 checked
            else if(s[i]=='5'){
                P[s[i]]++;
                if(P['0']){
                    ans=(i+1)-2;
                    break;
                }
            }
            else if(s[i]=='2'){
                P[s[i]]++;
                if(P['5']){
                    ans=(i+1)-2;
                    break;
                }
            }
            else if(s[i]=='7'){
                P[s[i]]++;
                if(P['5']){
                    ans=(i+1)-2;
                    break;
                }
            }
        }
        
        cout<<ans<<"\n";
    }
}
