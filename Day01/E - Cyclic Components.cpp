/*
Platform :- Codeforces
Contest :- Codeforces Round 479 Div 2
Approach :- We will maintain an array which will store the degree of each node , degree of node is no of nodes this node is connected to ,
            for all disjoint set of nodes of given graph we will do dfs and store each node in that disjoint set and if all the nodes of disjoint set are having a degree 2 then
            we got a cycle and will increment our ans by 1.
*/
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<vector<int>>& graph,vector<int>& used,vector<int>&arr){
   used[node]++;
   arr.push_back(node);
   
   for(int i=0;i<graph[node].size();++i){
       if(used[graph[node][i]]==0){
           dfs(graph[node][i],graph,used,arr);
       }
   }
}

int main(){
    int n,m;
    cin>>n>>m;
    
    //deg is the array contain degree of each node
    vector<vector<int>>graph(n);
    vector<int>deg(n);
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    
    //used is array for checking if we have visited the node or not 
    vector<int>used(n);
    int ans=0,f=0,c=0,d=0;

    vector<int>arr;
    for(int i=0;i<n;++i){
        if(used[i]==0){
            arr.clear();
            
            // we are doing dfs and storing all the elements of disjoint set of graph in array arr
            dfs(i,graph,used,arr);
           
            f=0;
            //checkig if all the element of array arr have degree 2 or not
            for(int j=0;j<arr.size();++j){
                if(deg[arr[j]]!=2){
                    f=1;break;
                }
            }
            
            if(f==0 )ans++;
        }
    }
    
    cout<<ans<<"\n";
}
