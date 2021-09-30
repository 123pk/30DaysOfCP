/*
Platform :- Codeforces
Contest :- Codeforces Round 745 Div 2
Approach :- Ans is 2n!/2 , beaware of large values
*/

#include<bits/stdc++.h>
usign namespace std;

#define ll long long
ll mod = 1e9+7;
void solve()
{  
    ll n;
    cin >> n;
    ll ans = 1;
    for(ll i = 3;i <= 2 * n;++i){
        ans *= i;
        ans %= mod;
    }
    cout << ans << "\n";
}   
 
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
