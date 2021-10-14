/*
Platform :- Codeforces
Contest :- Codeforces Round 748 Div 3
Approach :- we take path from to the root and if take account of 'k', after k operations if there is some edge between node we leave the nodes else we increment the count when we have
            nodes with zero edges to them
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int>graph[n];
        for(int i=1;i<n;++i){
            int u,v;
            cin>>u>>v;
            
            u--;v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        int ans=0;
        vector<int>vis(n),con(n);
        queue<int>bfs;
        for(int i=0;i<n;++i){
            con[i]=graph[i].size();
            if(graph[i].size()==1){
                bfs.push(i);
                //con[i]--;
                vis[i]++;
            }
        }
        
      //  for(int i=0;i<n;++i)cout<<con[i]<<" "<<(i+1)<<endl;
        
        while(!bfs.empty() && k){
            int c=bfs.size();
            for(int i=0;i<c;++i){
                int temp = bfs.front();
                bfs.pop();
                con[temp]--;
                //cout<<temp+1<<"--> \n";
                int g=0;
                for(int j=0;j<graph[temp].size();++j){
                    
                     
                    if(vis[graph[temp][j]]==0){
                      con[graph[temp][j]]--;
                     
                    //cout<<(graph[temp][j]+1)<<" "<<con[graph[temp][j]]<<endl;
                    if(con[graph[temp][j]]==1){
                        bfs.push(graph[temp][j]);
                        //con[graph[temp][j]]--;
                        vis[graph[temp][j]]++;
                    }
                    
                    }
                    if(con[graph[temp][j]]){
                        g=1;
                    }
                }
                
              //  if(g==0)con[temp]--;
            }
            
            k--;
        }
        //cout<<"\n";
        for(int i=0;i<n;++i){
            //cout<<(i+1)<<" "<<con[i]<<endl;
            if(con[i]>0)ans++;
        }
        cout<<ans<<"\n";
    }
}
