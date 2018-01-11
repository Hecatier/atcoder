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
    int a, b, c, d, e, f;
    vector<int> water, suger;
    int weight = -1, su = -1;
    double res = -1;
    cin >> a >> b >> c >> d >> e >> f;
    a *= 100, b *= 100;

    for(int i = 0; i*a <= 3000; i++){
        for(int j = 0; j*b <= 3000; j++){
            int tmp = ((i*a)+(j*b));
            if(tmp <= f && tmp > 0){
                water.push_back(tmp);
            }
        }
    }

    for(int i = 0; i*c <= 3000; i++){
        for(int j = 0; j*d <= 3000; j++){
            int tmp = ((i*c)+(j*d));
            if(tmp <= f && tmp >= 0){
                suger.push_back(tmp);
            }
        }
    }

    for(auto i = water.begin(); i != water.end(); i++){
        for(auto j = suger.begin(); j != suger.end(); j++){
            if((*i)+(*j) <= f && (*j) <= e*((*i)/100)){
                double density = (double)(100*(*j))/((*i)+(*j));
                if(res < density){
                    res = density;
                    su = (*j);
                    weight = (*i)+(*j);
                }
            }
        }
    }

    cout << weight << " " << su << endl;
}

int main(){
    solve();
    return 0;
}