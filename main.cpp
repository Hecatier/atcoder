#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>
#include <set>
#include <deque>

#define mod 1000000007
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOREACH(i, v) for(auto i = v.begin(); i != v.end(); i++)

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
    string s;
    int x[10];
    cin >> s;
    REP(i, 10) x[i] = 0;
    for(int i = 0; i < s.size(); i++){
        x[s[i]-'A']++;
    }
    for(int i = 0; i < 6; i++){
        cout << x[i];
        if(i != 5){
            cout << " ";
        }
    }
    cout << endl;
}

int main(){
    solve();
    return 0;
}