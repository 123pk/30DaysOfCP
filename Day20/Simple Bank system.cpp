/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 263
Approach :- take care of valid accounts while doing any query and transaction , maintain a normal vector of long long and on withdraw change the amount of sender and receiver 
            also take care of cases when the transfer is possible and when it is not.
*/
class Bank {
public:
    vector<long long>acc;
    Bank(vector<long long>& balance) {
        acc=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        
        if(acc.size()<account2)return false;
        if(acc.size()<account1)return false;
        if(acc[account1-1]>=money){
            acc[account1-1]-=money;
            acc[account2-1]+=money;
            return true;
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(account>acc.size())return false;
        acc[account-1]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(account>acc.size())return false;
        if(acc[account-1]<money)return false;
        
        acc[account-1]-=money;
        return true;
    }
};
