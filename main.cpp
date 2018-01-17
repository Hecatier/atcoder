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

void solve() {
    int n;
    double R = 0.0, W = 0.0;
    cin >> n;
    int r[n];
    REP(i, n) cin >> r[i];

    sort(r, r+n);

    for(int i = n-1; i >= 0; i--){
        if(i%2==0){
            W += r[i] * r[i];
        }else{
            R += r[i] * r[i];
        }
    }
    if(n%2==0){
        printf("%08lf\n", (R-W)*M_PI);
    }else{
        printf("%08lf\n", (W-R)*M_PI);
    }
}

int main(){
    solve();
    return 0;
}