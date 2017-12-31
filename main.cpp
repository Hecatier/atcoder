#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>
#include <unordered_map>

#define mod 1000000007

using namespace std;
using ll = long long;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a+b > c+d){
        cout << "Left" << endl;
    }else if(a+b < c+d){
        cout << "Right" << endl;
    }else{
        cout << "Balanced" << endl;
    }
}

int main(){
    solve();
    return 0;
}