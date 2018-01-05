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

void solve() {
    string s, t;
    cin >> s >> t;
    bool F = false;
    for(int i = s.size()-1; i >= 0; i--){
        bool flag = true;
        for(int j = t.size()-1; j >= 0; j--){
            if(!(s[i+j] == t[j] || s[i+j] == '?')){
                flag = false;
            }
        }
        if(flag){
            s.replace(i, t.size(), t);
            F = true;
            break;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '?'){
            s.replace(i, 1, "a");
        }
    }

    if(F){
        cout << s << endl;
    }else{
        cout << "UNRESTORABLE" << endl;
    }
}

int main(){
    solve();
    return 0;
}