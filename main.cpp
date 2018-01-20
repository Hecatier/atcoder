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
    ll x, y;
    vector<pair<ll, ll> > v;
    ll n, k;
    cin >> n >> k;
    REP(i, n) cin >> x >> y, v.push_back(make_pair(x, y));     
    sort(v.begin(), v.end());
    REP(i, n){
        k -=v[i].second;
        if(k <= 0){
            cout << v[i].first << endl;
            return;
        }
    }
}

int main(){
    solve();
    return 0;
}