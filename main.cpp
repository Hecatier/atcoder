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
#include <bitset>
//#include "mylib.h"

#define mod 1000000007
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOREACH(i, v) for(auto i = v.begin(); i != v.end(); i++)
#define PRINT(n) cout << n << endl

using namespace std;
using ll = long long;

int X[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[] = {1, 1, 1, 0, -1, -1, -1, 0};

void solve() {
    string s, t;
    cin >> s >> t;

    REP(i, s.length()){
        if(s[i] == t[i]){
        }else if(s[i] != t[i] && s[i] != '@' && t[i] != '@'){
            PRINT("You will lose");
            return;
        }else if(s[i] == '@'){
            if(!(t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r')){
                PRINT("You will lose");
                return;
            }
        }else if(t[i] == '@'){
            if(!(s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r')){
                PRINT("You will lose");
                return;
            }
        }
    }
    PRINT("You can win");
}

int main(){
    solve();
    return 0;
}
