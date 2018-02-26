#include "mylib.h"
#include <algorithm>

using namespace std;

//x,yの最大公約数
int gcd(int a, int b) {
    int x = max(a, b);
    int y = min(a, b);
    int z = x % y;
    if(z == 0){
        return y;
    }else{
        return gcd(y, z);
    }
}
//x,yの最小公倍数
int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}
//幅優先探索で最短経路の距離を返す
int bfs(int sx, int sy, int gx, int gy, int N, int M){
    int distance[N][M];
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
//単一始点最短経路
void shortest_path(){
    int d[V];
    REP(i, V) d[i] = INF;
    d[r] = 0;
    while(true){
        bool update = false;
        for(int i = 0; i < E; i++){
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if(!update) break;
    }
}
//入力nの各桁の合計を返す
int digitSum(long long x){
    int res = 0;
    string s = to_string(x);
    for(int i = 0; i < s.length(); i++){
        res += s[i]-'0';
    }
    return res;
}
//入力n以下の各桁の和の最大値
int digitSum2(long long x){
    string s = to_string(x);
    int res = (s[0]-'0')+9*(s.length()-1);
    if(x < 10){
        return x;
    }else if((x+1)%10 == 0){
        return res;
    }else{
        return res-1;
    }
}
//ワーシャルフロイド法初期化
void warshall_floyd_init(){
    rep(i, v){
        rep(j, v){
            if(i != j){
                d[i][j] = INF;
            }else{
                d[i][j] = 0;
            }
        } 
    }
}
//ワーシャルフロイド法
void warshall_floyd(){
    rep(k, v)
        rep(i, v)
            rep(j, v)
                if(d[i][k] != INF && d[k][j] != INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}
//ワーシャルフロイド法の負の閉路検出
bool isNegativeCycle(){
    rep(i, v){
        if(d[i][i] < 0) return true;
    }
    return false;
}
//最小全域木(クラスカル法)
struct UnionFind{
    vector<int> par;
    vector<int> sizes;

    UnionFind(int n) : par(n), sizes(n, 1){
        rep(i, n) par[i] = i;
    }

    int find(int x){
        if(x == par[x]) return x;
        return par[x] = find(par[x]);
    }

    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y) return;
        if(sizes[x] < sizes[y]) swap(x, y);
        par[y] = x;
        sizes[x] += sizes[y];
    }

    bool same(int x, int y){
        return find(x) == find(y);
    }

    int size(int x){
        return sizes[find(x)];
    }
};
struct Edge{
    int a, b, cost;
    bool operator<(const Edge& o) const{
        return cost < o.cost;
    }
};
struct Graph{
    int n;  //頂点数
    vector<Edge> es;

    int kruskal(){
        sort(es.begin(), es.end());
        UnionFind uf(n);
        int min_cost = 0;

        rep(i, es.size()){
            Edge& e = es[i];
            if(!uf.same(e.a, e.b)){
                min_cost += e.cost;
                uf.unite(e.a, e.b);
            }
        }
        return min_cost;
    }
};
Graph input_graph(){
    Graph g;
    int m;
    cin >> g.n >> m;
    rep(i, m){
        Edge e;
        cin >> e.a >> e.b >> e.cost;
        g.es.push_back(e);
    }
    return g;
}