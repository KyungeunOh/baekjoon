#include <iostream>

using namespace std;

const int MN = 1001;

int par[MN];

void init(int N){
    for(int i = 0; i < N; i++) par[i] = i;
}

int find(int x){
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void Union(int x, int y){
    x = find(x), y = find(y);
    if(x == y) return;
    par[y] = x;
}

int main(void){
    ios::sync_with_stdio(false);     cin.tie(NULL);
    int N, M, n;  cin >> N >> M;

    init(N);
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> n;
            if(n) if(find(i) != find(j)) Union(i, j);
        }
    }

    cin >> n;
    int root = find(n);

    int cnt = 1;
    for(int i = 1; i < M; i++){
        cin >> n;
        if(root != find(n)) cnt = 0;
    }
    cout << (cnt ? "YES\n" : "NO\n");
}