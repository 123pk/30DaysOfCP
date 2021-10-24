/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 264
Appraoch :- First for each node calculate the size of subtree for all nodes including that node or taking that node as root of that subtree, now do a bfs and for each node 
             calculate the product which is basically product of all the subtree size of children of current node and upper subtree which contain parent of current node which
             is (n - subtree_size_of_current_node)
*/
