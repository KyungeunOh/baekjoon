#include <iostream>
#include <algorithm>

using namespace std;

const int MN = 10101;
const int MM = 101010;
struct edge{
    int u, v, w;
};

int par[MN];
edge arr[MM];

void init(int N){
    for(int i = 1; i <= N; i++) par[i] = i;
}

int find(int x){
    if(x == par[x]) return x;
    return par[x] = find(par[x]);
}

void Union(int x, int y){
    x = find(x), y = find(y);
    if(x == y) return;
    par[y] = x;
}

bool cmp(const edge &A, const edge &B){
    return A.w < B.w;
}

int main(void){
    ios::sync_with_stdio(false);     cin.tie(NULL);
    int M, N;   cin >> M >> N;

    init(M);
    for(int i = 0; i < N; i++){
        cin >> arr[i].u >> arr[i].v >> arr[i].w;
    }

    sort(arr, arr + N, cmp);

    int cnt = 0, sum = 0;

    for(int i = 0; i < N; i++){
        if(cnt == M - 1) break;
        int u = arr[i].u;
        int v = arr[i].v;
        if(find(u) != find(v)){
            Union(u, v);
            sum += arr[i].w;
            cnt++;
        }
    }

    cout << sum << '\n';
}
