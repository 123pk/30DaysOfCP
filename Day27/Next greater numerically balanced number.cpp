/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 264
Approach :- first store all the numerically balanced values till 7777777, as this is enough for solving the problem, now for all values <10^5 we can bruteforce from some numerically
            balanced value greater than 'n' to the time (i>n) .  else for value greater than 10^5 there are not much option like for value greater than 666666 we can have only one value
            11224444 as our answer , for other we look for options like for value greater than 55555, we have either permutaion of (122333) or (224444) or (155555) so we try all permutaion
            of following and select the min one.
*/
