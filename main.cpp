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
    int n;
    string s;
    cin >> n >> s;

    string tmp = "b";
    for(int i = 0; i <= n; i++){
        if(i == 0){
            ;
        }else if(i%3 == 1){
            tmp.insert(tmp.begin(), 'a');
            tmp.insert(tmp.end(), 'c');
        }else if(i%3 == 2){
            tmp.insert(tmp.begin(), 'c');
            tmp.insert(tmp.end(), 'a');
        }else if(i%3 == 0){
            tmp.insert(tmp.begin(), 'b');
            tmp.insert(tmp.end(), 'b');
        }
        if(tmp == s){
            cout << i << endl;
            return;
        }
        if(tmp.size() > n){
            cout << -1 << endl;
            return;
        }
    }
}

int main(){
    solve();
    return 0;
}