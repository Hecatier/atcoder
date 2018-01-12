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
    int a, b;
    cin >> a >> b;
    if(a%3 == 0 || b%3 == 0 || (a+b)%3 == 0){
        cout << "Possible" << endl;
    }else{
        cout << "Impossible" << endl;
    }
}

int main(){
    solve();
    return 0;
}