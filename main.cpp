#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>

#define mod 1000000007
#define REP(i,n) for(int i=0; i<n; i++)

using namespace std;
using ll = long long;

int X[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int Y[] = {1, 1, 1, 0, -1, -1, -1, 0};

int h, w;
char s[55][55];

int neighborSearch(int x, int y){
    int c = 0;
    for(int i = 0; i < 8; i++){
        if(s[x+X[i]][y+Y[i]] == '#'){
            c++;
        }
    }
    return c;
}

void solve() {
    cin >> h >> w;
    for(int i = 1; i < h+1; i++){
        for(int j = 1; j < w+1; j++){
            cin >> s[i][j];
        }
    }

    for(int i = 1; i < h+1; i++){
        for(int j = 1; j < w+1; j++){
            if(s[i][j] == '.'){
                cout << neighborSearch(i, j);
            }else{
                cout << s[i][j];
            }
        }
        cout << endl;
    }
}

int main(){
    solve();
    return 0;
}