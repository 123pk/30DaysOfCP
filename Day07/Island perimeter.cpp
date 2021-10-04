/*
Platform :- Leetcode
Approach :- as the island is connected we can treat as a connected graph and we will find one starting node and will do bfs and find all the values connected to it which are island 
            we add 4 to our answer for each new node unvisited cell and that cell has x connected cells which are island then we remove x from our answer too and those side will not
            contribute to perimerter.
*/
