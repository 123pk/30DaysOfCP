/*
Platform :- Codeforces
Contest :- Manthan, Codefest 18 (rated, Div. 1 + Div. 2)
Approach :- Sort all the neighbouring nodes of given graph based on index of array of bfs.
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>val(200001);
int xx;

bool comp(int &x,int &y){
    return val[x]<val[y];
}

int main(){
    int n;
    cin>>n;
    
    vector<int>graph[n];
    for(int i=1;i<n;++i){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    vector<int>nodes(n);
    for(int i=0;i<n;++i){
        cin>>nodes[i];
        nodes[i]--;
        val[nodes[i]]=i;
    }
    
    for(int i=0;i<n;++i){
        sort(graph[i].begin(),graph[i].end(),comp);
    }
 
    queue<int>bfs;
    bfs.push(0);
    vector<int>vis(n);
    vis[0]++;
    
    if(nodes[0]!=0){
        cout<<"No\n";
        exit(0);
    }
    
    
    int start=1,sz=0,f=0;
    vector<int>z;
    while(!bfs.empty()){
        int c = bfs.size();
         
        for(int i=0;i<c;++i){
            int temp = bfs.front();
            bfs.pop();
            z.push_back(temp);
            sz = graph[temp].size();
            for(int j=0;j<graph[temp].size();++j){
                if(vis[graph[temp][j]])continue;
                vis[graph[temp][j]]++;
                bfs.push(graph[temp][j]);
                 
            }
        }
         
    }
    
    for(int i=0;i<n;++i){
        if(nodes[i]!=z[i]){
            f=1;break;
        }
    }
    
    if(f)cout<<"No\n";
    else cout<<"Yes\n";
}
