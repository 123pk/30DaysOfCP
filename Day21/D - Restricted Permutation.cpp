/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 223
Approach :- We will create a directed graph where edge will be from (A[i]-->B[i]) We will add one vector to store the indegree of every node . Now we will use min
            priority queue (min heap) to store the node with '0' indegree , now for each value of priority queue we will visit their adjacnt values and decrease their 
            indegree by 1 and if the indegree become '0' we will push in heap and we will push the node in answer vector , if at the end the answer size is !=n then print
            -1 else print all the nodes
*/
