#include <iostream>

using namespace std;

const int MN = 1010101;

int par[MN], rnk[MN];
int M, N;
void init(){
    for(int i = 1; i <= N; i++){
        par[i] = i; rnk[i] = 1;
    } 
}

int find(int x){
    if(x == par[x]) return x;
    return par[x] = find(par[x]);
}

void Union(int x, int y){
    x = find(x), y = find(y);
    if(x == y) return;
    if(rnk[x] < rnk[y]) swap(x, y);
    par[y] = x;

    if(rnk[x] == rnk[y]) rnk[x]++;
}

int main(void){
    ios::sync_with_stdio(false);     cin.tie(NULL);
    cin >> N >> M;
    init();

    for(int i = 0; i < M; i++){
        int q, a, b;    cin >> q >> a >> b;
        if(q) cout << (find(a) == find(b) ? "YES\n" : "NO\n");
        else Union(a, b);
    }
}