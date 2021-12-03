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
    deque<string> v1;
    deque<string> v2;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v1.push_back(s);
        v2.push_back(s);
    }

    sort(v1.begin(), v1.end());
    // for(auto &it : v1) cout << it << endl;

    int p=0;
    while(v1.size() > 1) {
        if(v1[v1.size()/2][p] == '0') {
            while(v1.back()[p] == '1') v1.pop_back();
        }else{
            while(v1.front()[p] == '0') v1.pop_front();
        }
        p++;
    }

    sort(v2.begin(), v2.end());
    p=0;
    while(v2.size() > 1) {
        if(v2[v2.size()/2][p] == '0') {
            while(v2.front()[p] == '0') v2.pop_front();
        }else{
            while(v2.back()[p] == '1') v2.pop_back();
        }
        p++;
    }

    int oxy=0, co2=0;

    p=1;
    for(int j=0; j<12; j++) {
        if(v1.back()[11-j] == '1') oxy += p;
        if(v2.back()[11-j] == '1') co2 += p;

        p*=2;
    }

    cout << oxy*co2;

    cout << "\n";
    // Use formatted output if the result is float or double

    return 0;
}
