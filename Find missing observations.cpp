/*
Platform :- Leetcode
Contest :- Leetcode weekly contest 261
Approach :- first find the total sum of array of size m , for a mean of 'k' from array of size (m+n) , total sum of n element array is ((k*(m+n))-tot1) where tot1 is sum of array 
            of size 'm' , now we know sum of 'n' size array , we also know range of sum we can get from 'n' values that is ( 'n' to 6*'n' ) if the sum is in this range then we can
            get it else we return empty array. Now we greedily choose and distribute each element some value between 1 and 6 accordingly.
*/
