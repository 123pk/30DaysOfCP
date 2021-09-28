/*
Platform :- Codeforces
Contest :- Codeforce Round #744 Div 3
Approach :- we will make changes until the array is sorted , we will make a copy of sorted array and sort that copy array , now we will check for the mismatched element in both array
            we will then look for the actual value which should be present at that position in sorted array by looking at copy array and we will make left shift from that 
            ( actual_value index to mismatched_value index ).
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n],B[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            B[i]=A[i];
        }
        
        sort(B,B+n);
        int ans=0,f=0;
        vector<int>change;
        vector<vector<int>>shift;
        while(1){
            f=0;
            //check if array is sorted or not
            for(int i=0;i<n;++i){
                if(A[i]!=B[i]){
                    f=i+1;break;
                }
            }
            
            if(f==0)break;
            ans++;
            change.clear();
            
            long long val=B[f-1];
            int r=0;
            change.push_back(val);
                    
            // index at which actual value exist in our array A
            for(int i=f-1;i<n;++i){
                if(A[i]==val){
                    r=i+1;break;
                }
                change.push_back(A[i]);
            }
            
            
            for(int i=0;i<change.size();++i){
                A[i+f-1]=change[i];
            }
            int m=change.size()-1;
            shift.push_back({f,r,m});
        }
        
        cout<<ans<<"\n";
        for(int i=0;i<ans;++i){
            for(int j=0;j<3;++j)cout<<shift[i][j]<<" ";
            cout<<"\n";
        }
        
    }
}
