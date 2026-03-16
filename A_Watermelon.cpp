#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll modpow(ll a, ll b)
{
    ll r = 1;
    while (b)
    {
        if (b & 1)
            r = r * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return r;
}
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

void solve()
{
    int num;
    cin>>num;
    if( num > 2 && num%2 == 0 ){
        cout<<"YES";
        return;
    }
    cout<<"NO";
    return;
}

int main()
{
    fast_io();

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}