#include <bits/stdc++.h>

using namespace std;
#define ln '\n'
#define nl cout << '\n'
#define pp pop_back()
#define pb emplace_back
#define ps(x) push_back((x))
#define sz(x) (int)(x).size()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define clr(M) (M).clear()
#define all(x) begin(x), end(x)
#define db(xx) cout << #xx << ": " << xx << ln
#define kill(D) return void(cout << D << ln)
#define alr(vv) ((vv).rbegin()), ((vv).rend())
#define fix(pre) cout << setprecision(pre) << fixed;
#define ai(v1, n) for (int ele = 0; ele < n; ele++) cout << v1[ele];

typedef long long ll;

const ll mod = 1e9 + 7;
const int maxSize = 1e6 + 10;

ll powMod(ll x, ll y, int mod1) {
    ll ret = x, ans = 1;
    while (y) {
        if (y % 2) ans *= ret, ans %= mod1;
        ret *= ret, ret %= mod1;
        y >>= 2;
    }
    return ans;
}

void s0lve() {

}

void _3bbas_();

signed main() {
    _3bbas_();
    int tst = 1;
    cin >> tst;
    while (tst--)
        s0lve();
    return 0;
}

void _3bbas_() {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}

