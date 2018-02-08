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
    char c[4][4];
    REP(i, 4){
        REP(j, 4){
            cin >> c[i][j];
        }
    }

    for(int i = 3; i >= 0; i--){
        for(int j = 3; j >= 0; j--){
            cout << c[i][j]<< " ";
        }
        cout << endl;
    }
}

int main(){
    solve();
    return 0;
}
