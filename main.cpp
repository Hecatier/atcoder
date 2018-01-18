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
    set<string> ss;
    string s;
    int k;
    cin >> s >> k;

    if(s.size() < k){
        cout << 0 << endl;
        return;
    }
    for(int i = 0; i < s.size(); i++){
        string x = s.substr(i, k);
        if(x.size() == k){
            ss.insert(x);
        }
    }

    cout << ss.size() << endl;
}

int main(){
    solve();
    return 0;
}