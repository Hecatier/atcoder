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
  string s;
    cin >> s;
 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(s[i] != s[j]){
                cout << "DIFFERENT" << endl;
                return;
            }
        }
    }
    cout << "SAME" << endl;
}

int main(){
    solve();
    return 0;
}