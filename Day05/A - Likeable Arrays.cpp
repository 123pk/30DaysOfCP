/*
Platform :- Hackerearth
Contest :- Hackerearth October easy 2021
Approach :- The basic idea is we store the frequency of each unique element in and we run a loop through them there are 2 Cases :- 
           Case 1 :- When frequency/count of element is > element value , fre[x]>x , here we need to remove (fre[x]-x )values 
           Case 2 :- Else we always have two options either to either to add elements to have (fre[x] = x) or to remove value and make (fre[x]=0) we choose one with min operation.
*/
