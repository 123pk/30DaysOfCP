/*
Platform :- Codeforces 
Contest :- Codeforces Educational Round 115
Approach :- let sum  = sum of all elements of array , now if (sum*2)% n !=0  then we don't have any pair , we just need basic math on mean formulae to deduce this relaion
            now else we use map to find pairs (i,j) where sum of them is equal to (z = (sum * 2) / n ) . Count of those pairs is equal to (count[A[i]]*count(A[j]) if A[i]!=A[j]
            else we have ( count[A[i]] *( count[A[i]]-1) / 2)
*/
