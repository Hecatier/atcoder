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
	int n, a[20], res=0;
	bool x[] = {true, false, true, true, false, true, true, false, true, true};
	bool y[] = {true, false, true, false, true, false, true, false, true, false};
	cin >> n;
	REP(i, n){
		cin >> a[i];
		while(!x[a[i]-1] || !y[a[i]-1]){
			a[i]--;
			res++;
		}
	}
	cout << res << endl;
}

int main(){
    solve();
    return 0;
}
