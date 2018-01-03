#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>

#define mod 1000000007

using namespace std;
using ll = long long;

bool isPrime(int x){
    if(x < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(x); i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    int a[100001];
    int q;
    cin >> q;
    int l[q], r[q];

    for(int i = 2; i <= 100000; i++){
        if(isPrime(i) && isPrime((i+1)/2)){
            a[i] = a[i-1]+1;
        }else{
            a[i] = a[i-1];
        }
    }
    for(int i = 0; i < q; i++){
        cin >> l[i] >> r[i];
        cout << a[r[i]]-a[l[i]-1] << endl;
    }
}

int main(){
    solve();
    return 0;
}