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
    int n;
    vector<pair<int, string> > v;
    int t1, sum = 0;
    string t2;
    cin >> n;
    REP(i, n) cin >> t2 >> t1, v.push_back(make_pair(t1, t2)), sum+=t1;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    if(v[0].first > sum/2){
        cout << v[0].second << endl;
    }else{
        cout << "atcoder" << endl;
    }
}

int main(){
    solve();
    return 0;
}