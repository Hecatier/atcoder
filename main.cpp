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
    ll q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;
    ll x = min(q*2, h);
    ll y = min(x*2, s);
    if(y*2 <= d){
        cout << y*n << endl;
    }else{
        unsigned long long res = ((n/2)*d)+(n%2)*y;
        cout << res << endl;
    }
}

int main(){
    solve();
    return 0;
}