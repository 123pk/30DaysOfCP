/*
Platform :- Leetcode
Contest :- Weekly contest 262
Approach :- Use two map one to store the count of price and other to check if the given 'timestamp' is used before or not , we also use two set to store the 'price' and 'timestamp',
            we use the set which store the price to give us the max and min price and set with 'timestamp' gives us most current value .
            When we get used timestamp we decrese the count of price at that timestamp and if price count is '0' we remove from set of price and increase count of current price .
*/

#include<bits/stdc++.h>
using namespace std;

class StockPrice {
public:
    map<int,int>P,count;
    set<int>mx,ava;
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(count[timestamp]==0){
            count[timestamp]=price;
            ava.insert(timestamp);
            P[price]++;
            mx.insert(price);
        }
        else{
            P[count[timestamp]]--;
             
            if(P[count[timestamp]]==0)mx.erase(count[timestamp]);
            P[price]++;
            count[timestamp]=price;
            mx.insert(price);
        }
    }
    
    int current() {
        auto it=ava.end();
        it--;
        return count[*it];
    }
    
    int maximum() {
        auto it=mx.end();
        it--;
        return *it;
    }
    
    int minimum() {
        return *mx.begin();
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */
