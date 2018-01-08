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
    int n, h, res = 0;
    cin >> n >> h;
    int a[n], b[n];
    REP(i, n) cin >> a[i] >> b[i];
    sort(a, a+n, greater<int>());
    sort(b, b+n, greater<int>());
    for(int i = 0; i < n, h > 0; i++){
        if(a[0] < b[i]){
            h -= b[i];
            b[i] = 0;
            res++;
        }else{
            res += h/a[0];
            h -= a[0]*(h/a[0]);
        }
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}