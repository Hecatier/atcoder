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
    int n, a, b;
    cin >> n >> a >> b;
 
    while(1){
        if(a < b-1){
            a++;
        }else{
            cout << "Borys" << endl;
            return;
        }
        if(b > a+1){
            b--;
        }else{
          cout << "Alice" << endl;
          return;
        }
    }
}

int main(){
    solve();
    return 0;
}