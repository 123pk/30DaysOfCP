/*
Platform :- Codeforces 
Contest :- Codeforces Round 744 Div 3
Approach :- We consider each point having '*' to be mid point and from there we try to go to left diagonally upward and similarly right diagonally upward , if we are able to get a 
            valid tick of size > k then we mark all the cells of grid , at the end we check if all the point of grid having '*' are marked or not , if marked we print "yes" else "NO"
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m,dif;
        cin>>n>>m>>dif;
        
        char ch[n][m];
        vector<pair<int,int>>temp;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>ch[i][j];
                if(ch[i][j]=='*')temp.push_back({i,j});
            }
        }
        
        //what should be idea
        int f=0,d=0,l=0,g=0,j=0,k=0,r=0;
        set<pair<int,int>>used;
        for(int i=0;i<temp.size();++i){
            //assume each point to be mid point
            
             j=temp[i].first-1;
             k=temp[i].second-1;
            
              l=0,r=0;
             //check how far left we can go
             while(j>=0 && k>=0){
                 if(ch[j][k]!='*')break;
                
                 l++;
                 j--;
                 k--;
             }
              
             if(l<dif)continue;
             
             //check how far on right diagonal we can go
             j=temp[i].first-1;
             k=temp[i].second+1;
             
             while(j>=0 && k<m){
                 if(ch[j][k]!='*')break;
                 j--;
                 k++;
                 r++;
             }
             
             if(r<dif)continue;
             
             g=min(l,r);
            
             used.insert(temp[i]);
              and right diagonal visited
             j=temp[i].first-1;
             k=temp[i].second-1;
             
             //make all those point on left diagonal
             while(g--){
                 if(ch[j][k]!='*')break;
                 used.insert({j,k});
                 j--;
                 k--;
             }
             
             
             g=min(l,r);
             j=temp[i].first-1;
             k=temp[i].second+1;
             //make all those point on right diagonal
             while(g--){
                 if(ch[j][k]!='*')break;
                 used.insert({j,k});
                 k++;
                 j--;
             }
        }
        
        //check if all points are marked or not
        for(int i=0;i<temp.size();++i){
            if(used.find(temp[i])==used.end()){
                f=1;break;
            }
        }
        
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
         
    }
}
