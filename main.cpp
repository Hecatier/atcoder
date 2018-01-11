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
    int n, res=0;
    cin >> n;
    int p[n];
    REP(i, n) cin >> p[i];

    REP(i, n){
        if(p[i] == i+1){
            swap(p[i], p[i+1]);
            res++;
        }
    }

    cout << res << endl;
}

int main(){
    solve();
    return 0;
}