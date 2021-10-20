/*
Platform :- Leetcode
Approach :- first take out all the words from string , basic idea is add one extra space in string and now when ever you find a ' ' and maintain a tempory string to take care of words
        if it is not empty then add that word in vector of string whenever you find ' ' , now reverse that vector and add all the words in string and add ' ' between words and don't
        add at the end of last word.
*/
class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        vector<string>P;
        
        string ans;
        string temp;
        int f=0;
        for(int i=0;i<s.size();++i){
            if(s[i]==' '){
                if(temp.size()){
                    P.push_back(temp);
                    temp="";
                }
            }
            else {
                temp+=s[i];
            }
        }
        reverse(P.begin(),P.end());
        for(auto &x:P){
            ans+=x;
            ans+=' ';
        }
        int n=ans.size();
        ans.erase(ans.begin()+n-1);
        return ans;
    }
};
