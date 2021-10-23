/*
Platform :- Codeforces
Contest :- Codeforces Round 646 Div 2
Approach :- if either there is just one node or the target node 'x' is already a leaf then "Ayush" wins else we need to delete (n-1)edges and if it is odd then "Ayush" wins.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     //Always read constraints
     int t;
     cin>>t;
     
     while(t--){
         int n,x;
         cin>>n>>x;
         
         vector<int>graph[n];
         for(int i=1;i<n;++i){
             int u,v;
             cin>>u>>v;
             u--;
             v--;
             graph[u].push_back(v);
             graph[v].push_back(u);
         }
         x--;
         vector<int>vis(n);
         queue<pair<int,int>>bfs;
         bfs.push({x,0});
         vis[x]++;
         int f=0;
        // vector<int>val;
         while(!bfs.empty()){
             int c = bfs.size();
             for(int i=0;i<c;++i){
                 pair<int,int>z= bfs.front();
                 
                 int temp=z.first;
                 int cost=z.second;
              //   f=0;

                 bfs.pop();
                 for(int j=0;j<graph[temp].size();++j){
                     if(vis[graph[temp][j]])continue;
                     f=1;
                     
                     vis[graph[temp][j]]++;
                     bfs.push({graph[temp][j],cost+1});
                 }
                 //if(f==0)val.push_back(cost);
             }
         }
         int del=0;
         if(graph[x].size()==1){
             cout<<"Ayush\n";
             continue;
         }
         
         del=n-1;
        // cout<<del<<" check \n";
         if(del%2)cout<<"Ayush\n";
         else cout<<"Ashish\n";
     }
}
