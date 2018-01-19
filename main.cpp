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
    int n, x, sum=0;
    vector<int> s;
    cin >> n;
    REP(i, n) cin >> x, s.push_back(x), sum+=x; 

    sort(s.begin(), s.end());

    for(auto i = s.begin(); i != s.end(); i++){
        if(sum%10 != 0){
            cout << sum << endl;
            return;
        }
        if(*i%10 != 0){
            sum -= *i;
        }
    }
    cout << 0 << endl;
}

int main(){
    solve();
    return 0;
}