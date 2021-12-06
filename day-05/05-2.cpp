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
    // ctrl + f, replace "," and " -> " with " "

    int n=500;

    vector<vector<int>> m(1000, vector<int>(1000, 0));

    for(int rep=0; rep<n; rep++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == x2) {
            if(y1>y2) {
                swap(x1, x2);
                swap(y1, y2);
            }
            for(int i=y1; i<=y2; i++) {
                m[i][x1]++;
            }
        }else if(y1 == y2) {
            if(x1>x2) {
                swap(x1, x2);
                swap(y1, y2);
            }
            for(int i=x1; i<=x2; i++) {
                m[y1][i]++;
            }
        }else{
            if(x1>x2) {
                swap(x1, x2);
                swap(y1, y2);
            }

            int mul=(y1<y2 ? 1 : -1);

            for(int i=x1; i<=x2; i++) {
                m[y1 + mul*(i-x1)][i]++;
            }
        }
    }

    int res = 0;
    for(int i=0; i<1000; i++) {
        for(int j=0; j<1000; j++) {
            if(m[i][j] > 1) res++;
        }
    }

    cout << res;

    cout << "\n";

    return 0;
}
