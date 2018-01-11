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
    int n, z[100005], res = 0;
    cin >> n;
    int a[n];
    REP(i, 100005) z[i] = 0;
    REP(i, n) cin >> a[i], z[a[i]]++;

    for(int i = 1; i < 100000; i++){
        res = max(res, z[i]+z[i+1]+z[i-1]);
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}