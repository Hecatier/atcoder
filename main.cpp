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

char Toupper(char s){ return (char)toupper(s); }

char Tolower(char s){ return (char)tolower(s); }

void solve() {
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(i == 0){
			cout << Toupper(s[i]);
		}else{
			cout << Tolower(s[i]);
		}
	}
	cout << endl;
}

int main(){
    solve();
    return 0;
}
