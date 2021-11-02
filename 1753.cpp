#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

#define P pair<int,int>
#define W first
#define V second

const int MN = 20101;
const int INF = 1e9;

vector<P> g[MN];
int dist[MN];

/*
struct edge{
    int v, w;
};
struct cmp{
    bool operator()(dege A, edge B){
        return A.w > B.w;
    }
};
priority_queue<P, vector<P>, cmp> pq;
*/

int main(void){
    int N, M, U; // 정점, 간선, 시작 정점
    cin >> N >> M >> U;
    for(int i = 0; i < M; i++){
        int u, v, w; cin >> u >> v >> w;
        g[u].push_back(make_pair(w,v));
    }

    fill(dist, dist + N + 1, INF);

    priority_queue<P, vector<P>, greater<P> > pq; // 가중치가 작은 값을 뺄 것이기 때문에 인자 3개로
    pq.push(make_pair(0, U));
    dist[U] = 0;

    while(!pq.empty()){
        P top = pq.top(); pq.pop();
        int n = top.V;
        int w = top.W;

        if(dist[n] < w) continue;

        for(P edge : g[n]){
            int nxt = edge.V;
            int cost = edge.W;
            if(dist[nxt] > dist[n] + cost){
                dist[nxt] = dist[n] + cost;
                pq.push(make_pair(dist[nxt], nxt));
            }
        }
    }

    for(int i = 1; i <= N; i++){
        dist[i] == INF ? (cout << "INF" << '\n') : (cout << dist[i] << '\n');
    }
}