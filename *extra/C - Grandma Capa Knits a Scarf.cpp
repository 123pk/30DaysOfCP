/*
Platform :- Codeforces
Contest :- Codeforces Round 750 Div 2
Approach :- For each index store the prefix of frequency count of characters as there are only 26 characters 'a'to'z' hence space complexity is O(n*26) , and now for each character
            from 'a' to 'z' first check if string without ith character is palindrome or not , if not then we cannot convert into any palindromic string , we move to next character
            if the string formed is palindromic now check between characters from start and end if we can insert some ith characters or not and calculate the anwser.
*/
