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
    int k, s, res = 0;
    cin >> k >> s;
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
            int x = s-(i+j);
            //printf("%d %d %d\n",i, j, x);
            if(x >= 0 && x <= k){
                res++;
            }
        }
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}