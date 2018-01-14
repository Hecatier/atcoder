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
    ll min = 2, max = 2;
    int k;
    cin >> k;
    ll a[k];
    REP(i, k) cin >> a[i];

    for(int i = k-1; i >= 0; i--){
        min = ((min+a[i]-1)/a[i])*a[i];
        max = (max/a[i])*a[i] + (a[i]-1);
        if(min > max){
            cout << "-1" << endl;
            return;
        }
    }
    cout << min << " " << max << endl;
}

int main(){
    solve();
    return 0;
}