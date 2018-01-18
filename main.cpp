#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>
#include <set>

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
    int n, res=0;
    set<int> ss;
    cin >> n;
    int a[n];
    REP(i, n) cin >> a[i];

    for(int i = 0; i < n; i++){
        if(ss.find(a[i]) == ss.end()){
            ss.insert(a[i]);
        }else{
            res++;
        }
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}