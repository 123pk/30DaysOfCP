/*
Platform :- Codeforces
Contest :- VK-Cup Round 2017 1 
Approach :- For a node to satisfy the condtion it need to be part of sub graph of nodes 'n' have no of indices equal to (n*(n+1))/2,  so we will store the count of each node edge
            now we will run a bfs on unvisited nodes and calculate the number of nodes in that disjont segment/subgraph and also find number of vertices in it , if it doesnot 
            satisfy the codition we print "NO" else at the end "YES"
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<int>graph[n];
    vector<int>count(n);
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        
        u--;
        v--;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
        count[u]++;
        count[v]++;
    }
    
    vector<int>vis(n);
    int no_vertices=0,d=0,f=0;
    long long ct=0;
    for(int i=0;i<n;++i){
        if(vis[i]==0){
            no_vertices=0,d=0;
            queue<int>bfs;
            bfs.push(i);
            vis[i]++;
            no_vertices+=count[i];
            d++;
            while(!bfs.empty()){
                int c= bfs.size();
                for(int j=0;j<bfs.size();++j){
                    int temp = bfs.front();
                    bfs.pop();
                    
                    for(int k=0;k<graph[temp].size();++k){
                        if(vis[graph[temp][k]]==0){
                            d++;
                            vis[graph[temp][k]]++;
                            bfs.push(graph[temp][k]);
                            no_vertices+=count[graph[temp][k]];
                        }
                    }
                }
            }
          //  cout<<ct<<" "<<no_vertices
            ct = d;
            ct*=(ct-1);
            
            if(ct!=no_vertices){
                f=1;break;
            }
        }
    }
    
    if(f)cout<<"NO\n";
    else cout<<"YES\n";
}
