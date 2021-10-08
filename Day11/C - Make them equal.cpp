/*
Platform :- Codeforces
Contest :- Codeforces Round 747 Div 2
Approach :- If you will carefully ananlyse the problem , you will find that max no of operation is going to be 2 and min is going to be 0.
            so when all characters of string are equal to char ch then ans =0
            else we take account of index of characters didn't match and greedily choose the values of 'x'
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        char ch;
        cin>>n>>ch;
        
        string s;
        cin>>s;
        
        int ans=0;
        vector<int>temp;
        for(int  i=0;i<n;++i){
           // cout<<s[i]<<" "<<ch<<" "<<(i+1)<<"\n";
            if(s[i]!=ch){
                temp.push_back(i+1);
            }
        }
        
        if(temp.size()==0){
            cout<<ans<<"\n";
            continue;
        }
        
        int z=0;
        for(int i=0;i<temp.size();++i){
           // cout<<temp[i]<<" ";
            if(i==0)z=temp[i];
            else z=__gcd(temp[i],z);
        }
       // cout<<"\n";
        
        if(temp.size()==1){
            if(z==n){
                cout<<1<<"\n"<<(n-1)<<"\n";
            }
            else{
              cout<<"1\n";
              cout<<n<<"\n";
            }
        }
        else{
            //we have no common values between index
            if(z==1){
               vector<int>used(n+1);
               for(auto& x:temp)used[x]++;
               int f=0;
               for(int i=2;i<=n;++i){
                   if(used[i]==0){
                       f=1;
                       ans=i;
                   }
               }
               
               if(f){
                   if(ans<=(n/2)){
                       cout<<2<<"\n";
                       cout<<n<<" "<<n-1<<"\n";
                   }
                   else{
                   cout<<1<<"\n";
                   cout<<ans<<"\n";
                   }
               }
               else{
                   cout<<2<<"\n";
                   cout<<n<<" "<<(n-1)<<"\n";
               }
            }
            else{
                if(n%z==0){
                    //we have atleast 4 elements and n is divisible by gcd then we ahve only one optionn of n-1
                    cout<<"1\n";
                    cout<<(n-1)<<"\n";
                }
                else{
                    cout<<"1\n";
                    cout<<n<<"\n";
                }
            }
        }
       // cout<<ans<<"\n";
    }
}
