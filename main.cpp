#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>

#define mod 1000000007
#define REP(i,n) for(int i=0; i<n; i++)

using namespace std;
using ll = long long;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b){
        cout << c << endl;
    }else if(b == c){
        cout << a << endl;
    }else if(a == c){
        cout << b << endl;
    }
}

int main(){
    solve();
    return 0;
}