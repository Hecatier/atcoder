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
	cin >> n;
	int t = 2025-n;

	for(int i = 1; i < 10; i++){
		for(int j = 1; j < 10; j++){
			if(i*j == t){
				cout << i << " x " << j << endl;
			}
		}
	}
}

int main(){
    solve();
    return 0;
}