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
    int n;
    cin >> n;
    ll a[n], b[n], res = INT_MAX;
    REP(i, n) cin >> a[i];
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = a[i]+b[i-1];
    }
    REP(i, n-1){
        res = min(res, abs(b[n-1]-b[i]*2));
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}