/*
Platform :- Codeforces
Contest :- Codeforcdes Round 428
Approach :- Traverse from root node and each other node the probability of that node is P(anc)*(1/no_of_child_anc)  where P(anc) = probability of visiting ancestor node 
            no_of_child_anc = no of children of ancestor node or no of siblings of current node . at the leaf node we add (d*P(curr_node)) where 'd' = depth of node, curr_node
            is curren node.
*/
#include<bits/stdc++.h>
using namespace std;

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
    
    queue<pair<int,double>>bfs;
    vector<int>vis(n);
    vis[0]++;
    double d=0;
    bfs.push({0,1});
    double ans=0;
    while(!bfs.empty()){
        
        int c = bfs.size();
        for(int i=0;i<c;++i){
            pair<int,double> temp = bfs.front();
            bfs.pop();
           // cout<<(temp.first+1)<<" "<<temp.second<<" "<<d<<endl;
            int f=0;
            double sz=0;
            
            for(int j=0;j<graph[temp.first].size();++j){
                if(vis[graph[temp.first][j]]==0){
                    sz++;
                    //f=1;
                  //  vis[graph[temp.first][j]]++;
                //    bfs.push({graph[temp.first][j],sz*temp.second});
                }
            }
            
            for(int j=0;j<graph[temp.first].size();++j){
                if(vis[graph[temp.first][j]]==0){
                    f=1;
                    vis[graph[temp.first][j]]++;
                    bfs.push({graph[temp.first][j],sz*temp.second});
                }
            }
            
            if(f==0){
             //   cout<<d<<" --> "<<temp.second<<"gives ";
                ans+=(d/temp.second);
                //cout<<ans<<"\n";
            }
            
        }
        d++;
    }
    
    cout<<to_string(ans)<<"\n";
}
