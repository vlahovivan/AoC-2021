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

    int n = 1000;

    int occ[12] = {0};

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        for(int j=0; j<12; j++) {
            occ[j] += (s[j] == '1');
        }
    }

    int gamma=0;
    int epsilon=0;

    int p=1;
    for(int j=0; j<12; j++) {
        if(occ[11-j] > 500) gamma += p;
        else epsilon += p;

        p*=2;
    }

    cout << gamma*epsilon;

    cout << "\n";
    // Use formatted output if the result is float or double

    return 0;
}
