'''
Platform :- Codeforces
Contest :- Codeforces Round 747 Div 2
Approach :- First convert 'k' into binary stiring and itterate through it if the s[i]=='1' the add pow(a,i) to your answer take care of modulo
'''
def reverse(string):
    string = string[::-1]
    return string



t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    s=format(k,"b")
    s=reverse(s)
    ans=0
    mod=10**9+7
    for i in range(len(s)):
        if(s[i]=='1'):
            ans+=(n**i)
            ans=ans%mod
    print(ans)
