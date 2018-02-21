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
#include <queue>
#include <bitset>
#include <stack>

#define mod 1000000007
#define INF 1000000000
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOREACH(i, v) for(auto i = v.begin(); i != v.end(); i++)
#define P pair<int, int>

using namespace std;
using ll = long long;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int dx2[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy2[] = {0, -1, -1, -1, 0, 1, 1, 1};

struct edge {int from, to, cost; };

void solve(){
    int v, e;
    cin >> v >> e;
    int s[e], t[e], d[e];
    int res[v][v];
    REP(i, e) cin >> s[i] >> t[i] >> d[i];
    
    REP(i, v){
        REP(j, v){
            if(i != j){
                res[i][j] = INF;
            }else{
                res[i][j] = 0;
            }
        }
    }

    REP(i, e) res[s[i]][t[i]] = d[i];

    REP(k, v){
        REP(i, v){
            REP(j, v){
                res[i][j] = min(res[i][j], res[i][k] + res[k][j]);
            }
        }
    }

    for(int i = 0; i < v; i++){
        if(res[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return; 
        }
    }
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(res[i][j] > pow(10, 7)*2){
                cout << "INF";
            }else{
                cout << res[i][j];
            }
            if(j < v-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    solve();
    return 0;
}
