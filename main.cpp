#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>

#define mod 1000000007
#define REP(i,n) for(int i=0; i<n; i++)

using namespace std;
using ll = long long;

void solve() {
    int n, x;
    ll res = 0;
    vector<int> a, b, c;
    cin >> n;
    REP(i, n) {cin >> x; a.push_back(x);}
    REP(i, n) {cin >> x; b.push_back(x);}
    REP(i, n) {cin >> x; c.push_back(x);}

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    unsigned long up, down;
    REP(i, n){
        up = (lower_bound(a.begin(), a.end(), b.at(i))-a.begin());
        down = n-(upper_bound(c.begin(), c.end(), b.at(i))-c.begin());
        res += up * down;
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}