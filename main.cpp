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
    int n, k, res = 0;
    map<int, int> m;
    vector<int> x;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(m.find(a[i]) == m.end()){
            m.insert(make_pair(a[i], 1));
        }else{
            m[a[i]]++;
        }
    }
    for(auto it = m.begin(); it != m.end(); it++){
        x.push_back(it->second);
    }
    sort(x.begin(), x.end());
    for(int i = 0; i < (int)m.size()-k; i++){
        res += x[i];
    }
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}