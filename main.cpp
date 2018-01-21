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
    int l, h;
    cin >> l >> h;
    int n;
    cin >> n;
    int a[n];
    REP(i, n){
        cin >> a[i];
        if(a[i] >= l && a[i] <= h){
            cout << 0 << endl;
        }else if(a[i] < l){
            cout << l-a[i] << endl;
        }else if(a[i] > l){
            cout << -1 << endl;
        }
    }
}

int main(){
    solve();
    return 0;
}