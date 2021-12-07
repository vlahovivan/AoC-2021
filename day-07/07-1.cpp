// If you're hacking me, at least subscribe to my channel at:
// https://www.youtube.com/user/ivanvlahov922

#include <bits/stdc++.h>
#define ll long long
#define what_is(x) cerr << #x << ": " << x << "\n";

#ifndef DEBUG
    #define cerr if(false) cerr
#endif

using namespace std;

const int MOD = 1e9 + 7;
const double DEG2RAD = 0.017453292;
const double RAD2DEG = 57.29578049;

int main()
{

#ifdef DEBUG
    freopen("../input.in", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // clean data, replace "," with " "
    int n = 1000;

    vector<int> v(n);
    for(auto &it : v) {
        cin >> it;
    }
    
    sort(v.begin(), v.end());

    ll res = 0;

    for(int i=0; i<n; i++) {
        res += abs(v[i] - v[n/2]);
    }

    cout << res;

    cout << "\n";

    return 0;
}
