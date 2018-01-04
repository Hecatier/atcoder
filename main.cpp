#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>

#define mod 1000000007

using namespace std;
using ll = long long;

void solve() {
    int n, k, res = 1;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        res = min(res*2, res+k);
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}