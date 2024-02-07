#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define rd ({ ll x; cin >> x; x; })

vector<ll> insertion_sort(ll n, vector<ll>& a) {
    for (ll i = 1; i <= n; ++i) {
        ll key = a[i];
        ll j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    return a;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<ll> sorted_array = insertion_sort(n, a);
    for (ll i = 1; i <= n; ++i) {
        cout << sorted_array[i] << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //int t = 1;
    //cin >> t;
    //for (int i = 1; i <= t; i++)
        solve();
    return 0;
}