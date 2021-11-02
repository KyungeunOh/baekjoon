#include <iostream>
#include <algorithm>

using namespace std;

const int MN = 1010101;

int par[MN];

void init(int N){
    for(int i = 1; i <= N; i++) par[i] = i;
}

int find(int x){
    if(x == par[x]) return x;
    return par[x] = find(par[x]);
}

int Union(int x, int y){
    x = find(x), y = find(y);
    if(x == y) return true;
    par[y] = x;
    return false;
}

int main(void){
    ios::sync_with_stdio(false);     cin.tie(NULL);
    int n, m, u, v;   cin >> n >> m;

    init(n);

    int cnt = 0;
    for(int i = 1; i <= m; i++){
        cin >> u >> v;
        if(Union(u, v)){
            cnt = i; break;
        }
    }
    
    if(cnt) cout << cnt << '\n';
    else cout << "0\n";
}