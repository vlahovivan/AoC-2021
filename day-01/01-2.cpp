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

    int n=2000;

    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int res = 0;

    for(int i=3; i<n; i++) res += (a[i] > a[i-3]);

    cout << res;

    // Use formatted output if the result is float or double

    return 0;
}
