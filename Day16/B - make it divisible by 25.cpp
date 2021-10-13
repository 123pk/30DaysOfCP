/*
Platform :- Codeforces
Contest :- Codeforces Round 748 Div 3
Approach :- for a number to be divisible by 25 the last two digits should be divisible by 25 and incase of "00"there should be atleast one more digit in front of "00".
             so we try to find the minimum index that where we get value( 75,25,50,x00) divisible by 25 and return (n-(i+1)-2).
*/
