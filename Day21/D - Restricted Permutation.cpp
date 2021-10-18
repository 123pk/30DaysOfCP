/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 223
Approach :- We will create a directed graph where edge will be from (A[i]-->B[i]) We will add one vector to store the indegree of every node . Now we will use min
            priority queue (min heap) to store the node with '0' indegree , now for each value of priority queue we will visit their adjacnt values and decrease their 
            indegree by 1 and if the indegree become '0' we will push in heap and we will push the node in answer vector , if at the end the answer size is !=n then print
            -1 else print all the nodes
*/
#include<bits/stdc++.h>
using namespace std;

//cycle detection in directed graph
void dfs(int v,int &f,vector<vector<int>>&graph,vector<int>&color){
    if(f)return;
  color[v] = 1; // GREY
  for(int w : graph[v]){
    if(color[w] == 1){
      f=1;
      return;
    }
    if(color[w] == 0) dfs(w,f,graph,color);
  }
  color[v] = 2; // BLACK
}



int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>graph(n);
    vector<int>color(n);

    
    vector<int>score(n);
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        graph[u].push_back(v);
        score[v]++;
    }
    
    vector<int>ans;
     //storing index with indegree 0
    priority_queue<int,vector<int>,greater<int>>P;
    for(int i=0;i<n;++i){
        if(score[i]==0)P.push(i);
    }
    
    while(!P.empty()){
        int top = P.top();
        P.pop();
        ans.push_back(top);
        for(auto x: graph[top]){
            score[x]--;
            if(score[x]==0)P.push(x);
        }
    }
    
    if(ans.size()!=n)cout<<"-1\n";
    else{
        for(auto &x:ans)cout<<x+1<<" ";
        cout<<"\n";
    } 
}
