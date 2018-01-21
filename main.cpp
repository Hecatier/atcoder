#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>
#include <set>
#include <deque>

#define mod 1000000007
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOREACH(i, v) for(auto i = v.begin(); i != v.end(); i++)

using namespace std;
using ll = long long;

int X[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[] = {1, 1, 1, 0, -1, -1, -1, 0};

int gcd(int a, int b) {
    int x = max(a, b);
    int y = min(a, b);
    int z = x % y;
    if(z == 0){
        return y;
    }else{
        return gcd(y, z);
    }
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

void solve() {
    int n, k;
    cin >> n >> k;
    ll x[n], y[n], res=0;
    char c[n];
    REP(i, n) cin >> x[i] >> y[i] >> c[i];

    for(int i = 0; i < k; i++){
        ll temp = 0;
        for(int j = 0; j < n; j++){
            ll xx = (k+i);
            if((x[j] >= xx*(x[j]/k) && x[j] <= xx*(x[j]/k)+xx) && (y[j] >= k*(y[j]/k) && y[j] <= k*(y[j]/k)+k) && c[j] == 'W'){
                temp++;
            }else if(!(x[j] >= xx*(x[j]/k) && x[j] <= xx*(x[j]/k)+xx && y[j] >= k*(y[j]/k) && y[j] <= k*(y[j]/k)+k) && c[j] == 'B'){
                temp++;
            }
        }
        res = max(res, temp);
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}