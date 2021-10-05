/*
Platform :- Codeforces
Contest :- Codeforcdes Round 428
Approach :- Traverse from root node and each other node the probability of that node is P(anc)*(1/no_of_child_anc)  where P(anc) = probability of visiting ancestor node 
            no_of_child_anc = no of children of ancestor node or no of siblings of current node . at the leaf node we add (d*P(curr_node)) where 'd' = depth of node, curr_node
            is curren node.
*/
