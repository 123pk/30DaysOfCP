/*
Platform :- Codeforces
Contest :- Codeforces Round 748 Div 3
Approach :- find the max value out of 3 and let (val = max_of_all + 1) , if there are more than one max in than case for them we print 1 else 0, and for other non max values answer
            is (val-value)
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long A[3],B[3];
        cin>>A[0]>>A[1]>>A[2];
        B[0]=A[0];
        B[1]=A[1];
        B[2]=A[2];
        
        sort(A,A+3);
        
        long long val=A[2]+1;
        long long x=0,y=0,z=0;
        
        if(A[2]==A[1]){
            x=val-B[0];
            y=val-B[1];
            z=val-B[2];
        }
        else{
            if(B[0]==A[2])x=0;
            else{
                x=val-B[0];
            }
            
            if(B[1]==A[2])y=0;
            else y=val-B[1];
            
            if(B[2]==A[2])z=0;
            else z=val-B[2];
        }
        
        
        
        cout<<x<<" "<<y<<" "<<z<<"\n";
        
    }
}
