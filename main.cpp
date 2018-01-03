#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>

#define mod 1000000007

using namespace std;
using ll = long long;

void solve(){
    string s;
    int res = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            res++;
        }
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}