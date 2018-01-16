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
    int a, b, n;
    cin >> a >> b >> n;

    for(int i = 1; i <= INT_MAX; i++){
        int t = a*i;
        if(t%a == 0 && t%b == 0 && t >= a && t >= b && t >= n){
            cout << t << endl;
            return;
        }
    }
}

int main(){
    solve();
    return 0;
}