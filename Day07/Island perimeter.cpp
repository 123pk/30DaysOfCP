/*
Platform :- Leetcode
Approach :- as the island is connected we can treat as a connected graph and we will find one starting node and will do bfs and find all the values connected to it which are island 
            we add 4 to our answer for each new node unvisited cell and that cell has x connected cells which are island then we remove x from our answer too and those side will not
            contribute to perimerter.
*/
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        
        pair<int,int>start;
        int f=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]){
                    start={i,j};
                    f=1;
                    break;
                }
            }
            if(f)break;
        }
        
        if(f==0)return ans;
        
        queue<pair<int,int>>bfs;
        set<pair<int,int>>vis;
        
        bfs.push(start);
        vis.insert(start);
        
        while(!bfs.empty()){
            int c=bfs.size();
            for(int k=1;k<=c;++k){
                pair<int,int>temp = bfs.front();
                bfs.pop();
                ans+=4;
                int i = temp.first;
                int j = temp.second;
                //up
                if((i-1)>=0){
                    if(grid[i-1][j]){
                        if(vis.find({i-1,j})==vis.end()){
                            vis.insert({i-1,j});
                        //    ans+=4;
                            bfs.push({i-1,j});
                            ans--;
                        }
                        else ans--;
                    }
                }
                
                //down
                if((i+1)<grid.size()){
                    if(grid[i+1][j]){
                        if(vis.find({i+1,j})==vis.end()){
                            vis.insert({i+1,j});
                         //   ans+=4;
                            bfs.push({i+1,j});
                            ans--;
                        }
                        else ans--;
                    }
                }
                
                
                //left
                if((j-1)>=0){
                    if(grid[i][j-1]){
                        if(vis.find({i,j-1})==vis.end()){
                            vis.insert({i,j-1});
                           // ans+=4;
                            bfs.push({i,j-1});
                            ans--;
                        }
                        else ans--;
                    }
                }
                
                //right
                if((j+1)<grid[0].size()){
                    if(grid[i][j+1]){
                        if(vis.find({i,j+1})==vis.end()){
                            vis.insert({i,j+1});
                            
                            bfs.push({i,j+1});
                            ans--;
                        }
                        else ans--;
                    }
                }
                
               // cout<<(i+1)<<" "<<(j+1)<<" "<<ans<<"\n";
            }
        }
        
        return ans;
    }
};
