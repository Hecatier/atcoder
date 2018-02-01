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
	int n;
	int ng[3];
	cin >> n;
	REP(i, 3) cin >> ng[i];

	if(n == ng[0] || n == ng[1] || n == ng[2]){
		cout << "NO" << endl;
		return;
	}
	REP(i, 100){
		REP(j, 4){
			int t = 3-j;
			if(t == 0){
				cout << "NO" << endl;
				return;
			}
			if(n-t >= 0 && n-t != ng[0] && n-t != ng[1] && n-t != ng[2]){
				n -= t;
				break;
			}
		}
		if(n == 0){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
    solve();
    return 0;
}
