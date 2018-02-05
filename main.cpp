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
	int n, c=0;
	cin >> n;
	string s[n], res="";
	map<string, int> m;
	REP(i, n) cin >> s[i], m.insert(make_pair(s[i], 0));
	REP(i, n) m.at(s[i])++;
	FOREACH(i, m){
		if(i->second > c){
			c = i->second;
			res = i->first;
		}
	} 
	cout << res << endl;
}

int main(){
    solve();
    return 0;
}
