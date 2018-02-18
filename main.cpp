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
    cin >> h >> w;
    REP(i, h){
        REP(j, w){
            cin >> s[i][j];
            if(s[i][j] == '#') c++;
        }
    }
 
    int res = bfs(0, 0, h-1, w-1, h, w);
    if(res != -1){
        cout << (h*w)-c-(res+1) << endl;
    }else{
        cout << -1 << endl;
    }
}

int main(){
    solve();
    return 0;
}
