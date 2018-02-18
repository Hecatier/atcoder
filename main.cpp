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

#define mod 1000000007
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOREACH(i, v) for(auto i = v.begin(); i != v.end(); i++)
#define PRINT(n) cout << n << endl
#define P pair<int, int>

using namespace std;
using ll = long long;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int DX[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int DY[] = {1, 1, 1, 0, -1, -1, -1, 0};

int h, w, c = 0, cc = 1;
char s[55][55];

int bfs(int sx, int sy, int gx, int gy, int N, int M){
    int distance[h][w];
    queue<P> que;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            distance[i][j] = -1;
        }
    }
    que.push(P(sx, sy));
    distance[sx][sy] = 0;

    while(que.size()){
        P p = que.front(); que.pop();
        if(p.first == gx && p.second == gy) break;  //ゴールなら探索終了
        for(int i = 0; i < 4; i++){
            int nx = p.first + dx[i], ny = p.second + dy[i];    //nx, nyは移動後の点
            if(0 <= nx && nx < N && 0 <= ny && ny < M && s[nx][ny] != '#' && distance[nx][ny] == -1){
                que.push(P(nx, ny));
                distance[nx][ny] = distance[p.first][p.second] + 1;
            }
        }
    }
    return distance[gx][gy];
}

void solve(){
    int a[3], b[3], c[3][3];
    REP(i, 3) REP(j, 3) cin >> c[i][j];

    a[0] = min(c[0][0], min(c[0][1], c[0][2]));
    b[0] = c[0][0] - a[0];
    a[1] = c[1][0] - b[0];
    a[2] = c[2][0] - b[0];
    b[1] = c[0][1] - a[0];
    b[2] = c[0][2] - a[0]; 

    REP(i, 3){
        REP(j, 3){
            if(c[i][j] != a[i]+b[j]){
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
}

int main(){
    solve();
    return 0;
}
