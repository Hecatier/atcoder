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
#include <bitset>
//#include "mylib.h"

#define mod 1000000007
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOREACH(i, v) for(auto i = v.begin(); i != v.end(); i++)
#define PRINT(n) cout << n << endl

using namespace std;
using ll = long long;

int X[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[] = {1, 1, 1, 0, -1, -1, -1, 0};

void solve() {
    ll n, a[1000005];
    cin >> n;
    a[1]=0, a[2]=0, a[3]=1;
    for(int i = 4; i <= n; i++){
        a[i] = (a[i-3] + a[i-2] + a[i-1])%10007;
    }
    PRINT(a[n]);
}

int main(){
    solve();
    return 0;
}
