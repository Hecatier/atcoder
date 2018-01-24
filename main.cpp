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
    double n, m, res;
    cin >> n >> m; 
    if(n >= 12){
        n = n-12;
    }
    double m_angle = n*30+m*0.5;
    double s_angle = 6*m;
    res = max(m_angle - s_angle, s_angle - m_angle);

    if(res > 180){
        cout << 360-res << endl;
    }else{
        cout << res << endl;
    }
}

int main(){
    solve();
    return 0;
}