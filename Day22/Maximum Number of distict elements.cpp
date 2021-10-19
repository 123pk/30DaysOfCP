/*
Platform :- Codechef
Contest :- Codechef Snackdown 2021 quaifier
Approach :- There are atmost m distict elements that we can generate for array 'C' , the basic idea is for a given A[i] there can be A[i] distinct mod vlaues , we will maintain
            a min heap that will store the values from 0 to n-1 , if the top value of heap is less than A[i] the give this values at that index else assign last used value to it.
*/
