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
    string str;
    cin>>str;
    bool form = false;
    int n = str.size();
    if( str[0] == 'R' && str[1] >= '0' && str[1] <= '9' ){
        string num1; 
        int num2 = 0;
        int i = 1;
        for( i = 1 ; '0' <= str[i] && '9' >= str[i] ; i++ ){
            num1.push_back(str[i]);
        }
        i += 1;
        for( int j = i; j < n ; j++ ){
            num2 *= 10;
            num2 += (str[j] - '0');
        }
        string temp;
        while( num2 ){
            int x = num2%26;
            num2 /= 26;
            if( x != 0 ) temp.push_back('A'+x-1);
            else {
                temp.push_back('Z');
                num2 -= 1;
            }
        }
        reverse(temp.begin(),temp.end());
        temp = temp + num1;
        cout<<temp<<endl;

    } else {
        
        int i = 0;
        for( i = 0 ; i < n ; i++ ){
            if(str[i] <= '9' && str[i] >= '0' ) break;
        }
        string s1 = str.substr(0,i);
        string s2 = str.substr(i);
        int num2 = 0;
        for( char ch : s1){
            num2 *= 26;
            num2 += ch - 'A' + 1;
        }
        s1 = to_string(num2);
        string ans = 'R' + s2 + 'C' + s1;
        cout<<ans<<endl;
    }
    
}

int main()
{
    fast_io();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}