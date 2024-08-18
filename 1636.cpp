#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vt vector
 
const ll MOD = 1e9 + 7;
 
int main()
{
    ll n;
    ll x;
    cin >> n >> x;
    vt<ll> coins(n);
    sort(coins.begin(), coins.end());
    vt<ll>
        dp(x + 1, 0);
    dp[0] = 1;
    for (auto &c : coins)
        cin >> c;
 
    for (ll j = coins.size() - 1; j >= 0; j--)
    {
        for (ll i = 1; i <= x; i++)
        {
            if (i - coins[j] >= 0)
                (dp[i] += dp[i - coins[j]]) %= MOD;
        }
    }
 
    cout << dp[x] << endl;
}