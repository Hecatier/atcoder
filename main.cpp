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

void solve() {
    int n, res = INT_MIN, c = 0, cc = 0;
    cin >> n;
    int f[n][10], p[n][11];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            cin >> f[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= 10; j++){
            cin >> p[i][j];
        }
    }

    for(int i = 1; i < (1<<10); i++){
        cc = 0;
        for(int j = 0; j < n; j++){
            c = 0;
            for(int k = 0; k < 10; k++){
                if(((i>>k) & 1) && f[j][k]){ //1~1023を右シフトすると1のビットがいい感じにでてくる．それと&をとって全探索
                    c++;    //他の店と同じ曜日がいくつあるか
                }
            }
            cc += p[j][c];  //店の利益
        }
        res = max(res, cc);
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}