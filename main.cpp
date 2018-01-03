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
    int n, res = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    while(1){
        for(int i = 0; i < n; i++){
            if(a[i]%2 != 0){
                cout << res << endl;
                return;
            }else{
                a[i] = a[i]/2;
            }
        }
        res++;
    }
}

int main(){
    solve();
    return 0;
}