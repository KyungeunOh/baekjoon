#include <bits/stdc++.h>
#define MAX 16
using namespace std;
const int INF = 1e9;
int N, w[MAX][MAX];
int dp[MAX][1<<MAX];

int tsp(int cur, int visited){
    int &ret = dp[cur][visited];
    if(ret != -1) return ret;

    if(visited == (1<<N)-1){
        if(w[cur][0] != 0) return w[cur][0];
        return INF;
    }
    ret = INF;
    for(int i = 0; i < N; ++i){
        if(visited &(1<<i) || w[cur][i] == 0) continue;
        ret = min(ret, tsp(i, visited|(1<<i)) + w[cur][i]);
    }
    return ret;
}

int main(void){
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> w[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    cout << tsp(0,1) << '\n';
    return 0;
}