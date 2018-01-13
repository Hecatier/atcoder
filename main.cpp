#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>

#define mod 1000000007
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)

using namespace std;
using ll = long long;

int X[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[] = {1, 1, 1, 0, -1, -1, -1, 0};

void solve() {
    int n, k, res = 0;
    cin >> n >> k;
    int l[n];
    REP(i, n) cin >> l[i];

    sort(l, l+n);
    reverse(l, l+n);
    REP(i, k) res += l[i];
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}