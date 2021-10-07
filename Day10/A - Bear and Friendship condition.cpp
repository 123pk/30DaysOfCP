/*
Platform :- Codeforces
Contest :- VK-Cup Round 2017 1 
Approach :- For a node to satisfy the condtion it need to be part of sub graph of nodes 'n' have no of indices equal to (n*(n+1))/2,  so we will store the count of each node edge
            now we will run a bfs on unvisited nodes and calculate the number of nodes in that disjont segment/subgraph and also find number of vertices in it , if it doesnot 
            satisfy the codition we print "NO" else at the end "YES"
*/
