/*
Platform :- Leetcode
Problem :- Sort Characters By Frequency
Approach :- use a vector to store the frequency of each character and now create a pair and sort with characters frequency using comparator function. 
*/
bool comp(pair<int,char>&P,pair<int,char>&Q){
    if(P.first==Q.first)return P.second>Q.second;    
    return P.first>Q.first;
    }
class Solution {
public:
    
    
    
    string frequencySort(string s) {
        vector<pair<int,char>>P;
        vector<int>temp(256);
        
        for(auto &x:s){
            temp[x-'0']++;
        }
        
        for(int i=0;i<s.size();++i){
             
              P.push_back({temp[s[i]-'0'],s[i]});
           
        }
        
        sort(P.begin(),P.end(),comp);
        string ans;
        
        for(int i=0;i<P.size();++i){
            ans+=P[i].second;
        }
        
        return ans;
    }
};
