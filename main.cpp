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
    for(int i = s.size()-1; i > 0; i--){
        if(s.size()%2 == 0){
            bool f = true;
            for(int j = 0; j < i/2; j++){
                if(s[j] != s[j+(i/2)]){
                    f = false;
                }
            }
            if(f){
                cout << i-1 << endl;
                return;
            }
        }
    }
}

int main(){
    solve();
    return 0;
}