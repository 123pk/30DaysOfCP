/*
Platform :- Codeforces
Contest :- Codeforces Round 479 Div 2
Approach :- We will maintain an array which will store the degree of each node , degree of node is no of nodes this node is connected to ,
            for all disjoint set of nodes of given graph we will do dfs and store each node in that disjoint set and if all the nodes of disjoint set are having a degree 2 then
            we got a cycle and will increment our ans by 1.
*/
