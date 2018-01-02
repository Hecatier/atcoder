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

void solve(){
    ll x, y, res = 1;
    cin >> x >> y;

    for(ll i = 0; i < y; i++){
        x = x * 2;
        if(x <= y){
            res++;
        }else{
            cout << res << endl;
            return;
        }
    }
}

int main(){
    solve();
    return 0;
}