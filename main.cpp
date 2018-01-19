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
    deque<ll> deq;
    int n;
    cin >> n;
    ll a[n];
    REP(i, n) cin >> a[i];

    REP(i, n){
        if((i+1)%2 == n%2){
            deq.push_front(a[i]);
        }else{
            deq.push_back(a[i]);
        }
    }

    for(auto i = deq.begin(); i != deq.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}

int main(){
    solve();
    return 0;
}