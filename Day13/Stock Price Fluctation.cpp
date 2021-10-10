/*
Platform :- Leetcode
Contest :- Weekly contest 262
Approach :- Use two map one to store the count of price and other to check if the given 'timestamp' is used before or not , we also use two set to store the 'price' and 'timestamp',
            we use the set which store the price to give us the max and min price and set with 'timestamp' gives us most current value .
            When we get used timestamp we decrese the count of price at that timestamp and if price count is '0' we remove from set of price and increase count of current price .
*/
