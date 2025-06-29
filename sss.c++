#include <bits/stdc++.h>
#define Darkness ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
#define sz(a) ((int)((a).size()))
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define input(a)      \
    for (auto &i : a) \
        cin >> i;
#define print(a)          \
    for (auto &i : a)     \
        cout << i << " "; \
// cout << endl;
// #define endl "\n"
typedef long long ll;
using namespace std;

void solve()
{
    union data
    {
        int i;
        float f;
    };
    data d;
    d.i = 10;
    // d.f = 5.5;
    cout << d.f << endl;
}

int main()
{
    Darkness;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
