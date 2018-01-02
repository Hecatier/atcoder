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
    string s;
    cin >> s;
    int res = (int)s.length();
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[i+1]){
            res = min(res, max(i+1, (int)s.length()-i-1));
        }
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}