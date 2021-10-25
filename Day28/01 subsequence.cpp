/*
Platform :- Codechef
Contest :- Codechef October Cook off  2021
Approach :- Best strategy is to order elements at odd position in decreasing order and elements at even postion in increasing order , now for finding the total number of subsequence
            count total of even position element sum and run a loop from 0 to n-1 for all  odd poisitoin number of 01 subsequence position is (odd[i]*total_evel_elemts_from(i+1 to n))
*/
