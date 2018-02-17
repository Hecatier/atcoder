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
//#define DEBUG

using namespace std;
using ll = long long;

int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[] = {1, 1, 1, 0, -1, -1, -1, 0};

void solve(){
    int n = 100;
    int a[n][n];
    int Q;
    vector<int> X, Y, H;

    int x, y, v, z;
    int Min = 100, MinX = 0, MinY = 0;

    //input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    //algorithm
    for(Q = 0; Q < 1000; Q++){
        x = 0, y = 0, v = 0, z = 0;
        for(int i = 1; i < n-1; i++){
            for(int j = 1; j < n-1; j++){
                if(a[i][j] < Min && a[i][j] > 0){
                    Min = a[i][j];
                    MinX = j;
                    MinY = i;
                }
                int temp = a[i][j];
                for(int k = 0; k < 8; k++){
                    temp += a[i+dx[k]][j+dy[k]];
                }
                if(z < temp && temp > 2000){
                    x = j;  //山のx座標
                    y = i;  //山のy座標
                    int distance = abs(MinX-x)+abs(MinY-y);
                    if(distance > 100) distance = 100;
                    v = max(Min, distance);   //山の値
                    v = min(v, a[i][j]);
                    z = temp;
                }
            }
        }

        //calc
        if(v > 0){
            X.push_back(x);
            Y.push_back(y);
            H.push_back(v);
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    a[i][j] -= max(0, v-abs(x-j)-abs(y-i));
                }
            }
        }else{
            break;
        }
    }

    //output
    cout << Q << endl;
    for(int i = 0; i < X.size(); i++){
        cout << X[i] << " " << Y[i] << " " << H[i] << endl;
    }

#ifdef DEBUG
    ll res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
            res += abs(a[i][j]);
        }
        cout << endl;
    }
    clog << res << endl;
#endif
}

int main(){
    solve();
    return 0;
}
