/*
Platform :- Codeforces
Contest :- Codeforces Round 750 Div 2
Approach :- For each index store the prefix of frequency count of characters as there are only 26 characters 'a'to'z' hence space complexity is O(n*26) , and now for each character
            from 'a' to 'z' first check if string without ith character is palindrome or not , if not then we cannot convert into any palindromic string , we move to next character
            if the string formed is palindromic now check between characters from start and end if we can insert some ith characters or not and calculate the anwser.
*/
#include<bits/stdc++.h>
using namespace std;

bool check(string& s){
    int c=s.size();
    for(int i=0;i<(c/2);++i){
        if(s[i]!=s[c-1-i])return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        //this stores 
        vector<int>z(26);
        vector<int>idx[26];
        vector<int>all;
        vector<vector<int>>A;
        for(int i=0;i<n;++i){
            all.push_back(i);
            z[s[i]-'a']++;
            idx[s[i]-'a'].push_back(i);
            A.push_back(z);
        }
        
        //now for each of choosen character start with not having single element int 
        // string and then kept on having adding characters
        
        if(check(s)){
            cout<<0<<"\n";
            continue;
        }
        
        int f=0,k=0,ans=-1;
        vector<int>val,f1,f2,s1,s2,id;
        string old=s;
        for(int i=0;i<26;++i){
            if(z[i]==0)continue;
            val = idx[i];
            k=0;
            old="";
            id.clear();
            for(int j=0;j<n;++j){
                 if(val[k]==j){
                    if(k<val.size()-1) k++;
                     continue;
                 }
                 old+=s[j];
                 id.push_back(j);
            }
            
            if(check(old)){
                f=1;
                if(ans==-1)ans=val.size();
                else ans=min(ans,int(val.size()));
                // cout<<ans<<" start\n";
                //now we need to check if we can add some of them
                int c = old.size();
                int sz=c/2;
                if(c%2)sz++;
                int temp = val.size(),zzz=0;
                for(int j=1;j<(sz);++j){
                    f1=A[id[j]];
                    f2=A[id[j-1]];
                    s1=A[id[c-1-j]];
                    s2=A[id[c-1-(j-1)]];
                    zzz=min(abs(f1[i]-f2[i]),abs(s2[i]-s1[i]));
                    //cout<<j<<" "<<zzz<<"\n";
                    temp-=(zzz*2);
                }
                //cout<<temp<<" ";
                if(c%2==0){
                    //1224 2 2
                    f1=A[id[c/2]];
                    f2=A[id[(c/2)-1]];
                    temp-=(abs(f1[i]-f2[i]));
                }
                
                if(id[0]!=0){
                f1=A[id[0]-1];
                 
                s1=A[id[c-1]];
                s2=A[n-1];
                zzz=min(f1[i],abs(s2[i]-s1[i]));
                //cout<<id[0]<<" "<<id[c-1]<<" "<<zzz<<"\n";
                
                
                
                temp-=(zzz*2);
                }
               // cout<<temp<<"\n";
                
                ans=min(ans,temp);
            }
        }
        
        
        
         cout<<ans<<"\n";
    }
}
