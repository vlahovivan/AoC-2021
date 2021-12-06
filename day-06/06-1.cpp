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

    // input must be cleaned before
    // ctrl + f, replace "," with " "


    int n=300;
    
    vector<int> occ(9);

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        occ[x]++;
    }

    for(int day=0; day<80; day++) {
        int tmp = occ[0];

        for(int i=0; i<8; i++) {
            occ[i] = occ[i+1];
        }

        occ[6] += tmp;
        occ[8] = tmp;        
    }

    int res=0;
    for(int i=0; i<9; i++){
        res+=occ[i];
    }

    cout << res;

    cout << "\n";

    return 0;
}
