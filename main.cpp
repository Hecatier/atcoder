#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>
#include <unordered_map>

#define mod 1000000007

using namespace std;
using ll = long long;

int addDigit(int x){
    string y = to_string(x);
    int z = 0;
    for(int i = 0; i < y.length(); i++){
        z += y[i]-'0';
    }
    return z;
}

void solve(){
    int n, a, b, res = 0;

    cin >> n >> a >> b;

    for(int i = 1; i <= n; i++){
        int x = addDigit(i);
        if(x >= a && x <= b){
            res += i;
        }
    }

    cout << res << endl;
}

int main(){
    solve();
    return 0;
}