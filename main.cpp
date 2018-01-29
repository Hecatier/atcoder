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

ll memo[2][105];

void solve() {
	int n;
	cin >> n;
	int a[2][n];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
 
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < n; j++){
			memo[i][j] = 0;
		}
	}
 
	memo[0][0] = a[0][0]; 
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < n; j++){
			if(i == 0){
				memo[i][j+1] = a[i][j+1] + memo[i][j];
				memo[i+1][j] = a[i+1][j] + memo[i][j];
			}else{
				memo[i][j+1] = max(memo[i][j+1], memo[i][j]+a[i][j+1]);
			}
		}
	}
	cout << memo[1][n-1] << endl;
}

int main(){
    solve();
    return 0;
}