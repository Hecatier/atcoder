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
    int n, l;
    vector<string> s;
    cin >> n >> l;
    string tmp;
    REP(i, n) cin >> tmp, s.push_back(tmp);
    sort(s.begin(), s.end());
 
    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i;
    }
    cout << endl;
}

int main(){
    solve();
    return 0;
}