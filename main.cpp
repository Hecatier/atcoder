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

using namespace std;
using ll = long long;

int X[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[] = {1, 1, 1, 0, -1, -1, -1, 0};

void solve() {
	ll n, x, res = 0;
	cin >> n >> x;
	int a[n];
	REP(i, n) cin >> a[i];
	bitset<20> bs(x);
	REP(i, 20) if(bs[i] == 1) res += a[i];
	cout << res << endl;
}

int main(){
    solve();
    return 0;
}