/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 264
Appraoch :- First for each node calculate the size of subtree for all nodes including that node or taking that node as root of that subtree, now do a bfs and for each node 
             calculate the product which is basically product of all the subtree size of children of current node and upper subtree which contain parent of current node which
             is (n - subtree_size_of_current_node)
*/
class Solution {
public:
    //this function calculates the subtree sizze for each node doing dfs
    int dfs(vector<vector<int>>&graph,int node,vector<int>&sub){
        if(graph[node].size()==0)return sub[node];
        
        for(int i=0;i<graph[node].size();++i){
            sub[node]+=dfs(graph,graph[node][i],sub);
        }
        return sub[node];
    }
    
    int countHighestScoreNodes(vector<int>& parents) {
        int n=parents.size();
        vector<vector<int>>graph(n);
        for(int i=1;i<parents.size();++i){
            graph[parents[i]].push_back(i);
        }
        
        //now for each node store the number of values in subtree with current node as
        // root node
        vector<int>sub(n,1),vis(n);
        int temp = dfs(graph,0,sub);
        
       
        
        map<long long,int>ans;  
        
        queue<pair<int,int>>bfs;
        bfs.push({0,-1});
        int node,parent;
        long long val=0;
        
        while(!bfs.empty()){
            int c=bfs.size();
            for(int k=1;k<=c;++k){
                
                pair<int,int>temp = bfs.front();
                bfs.pop();
                
                parent=temp.second;
                node=temp.first;
                
                if(graph[node].size()==0){
                  //if it is a leaf node then the value we will get is (n-1) after removing it
                    ans[n-1]++;
                    continue;
                }
                
                if(parent==-1)val=1;
                else val=n-sub[node];
                // we calculate the product of subtree size for each child of current node
                // and multiply with the upper subtree which includes parent of current node 
                
                for(int i=0;i<graph[node].size();++i){
                    val*=sub[graph[node][i]];
                    bfs.push({graph[node][i],node});
                }
                
                ans[val]++;
            }
        }
        
        int d=0;
         
        return ans.rbegin()->second;
        
    }
};
