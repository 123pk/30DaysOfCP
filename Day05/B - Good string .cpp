/*
Plataform :- Hackerearth
Contest :- Hackerearth October easy 2021
Approach :- If you carefully read the problem and analyse it you will find that you only care about strings which have all characters same as for other string with 
            mix character you will always be able to form pair , so count number of strings with (1111...) all_ones and (000...)all_zeros and store in two separate variable and the 
            ans is total_pair_possible - (all_ones * all_zeros).
            Total number of pair for 'n' size array is [ (n*(n-1))/2 ]
*/
