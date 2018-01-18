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
    int n, sum=0, res=0;
    cin >> n;
    int a[n];
    REP(i, n) cin >> a[i], sum+=a[i];
    if(sum%n == 0){
        int ave = sum/n;
        int tmp = 0;
        for(int i = 0; i < n-1; i++){
            tmp += a[i];
            if(tmp != (i+1)*ave){
                res++;
            }
        }
        cout << res << endl;
    }else{
        cout << -1 << endl;
    }
}

int main(){
    solve();
    return 0;
}