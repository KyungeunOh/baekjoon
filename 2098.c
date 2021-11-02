#include <stdio.h>
#include <string.h>

#define MAX 16
#define min(a,b) a<b?a:b

const int INF = 1e9;

int N;
int w[MAX][MAX];
int dp[MAX][1 << MAX];

int tsp(int cur, int visited){
    if(dp[cur][visited] != -1) 
        return dp[cur][visited];

    if(visited == (1 << N) - 1){
        if(w[cur][0] != 0) return w[cur][0];
        return INF;
    }

    dp[cur][visited] = INF;
    for(int i = 0; i < N; i++){
        if(visited & (1 << i) || w[cur][i] == 0) continue;
        dp[cur][visited] = min(dp[cur][visited], tsp(i, (visited | (1 << i))) + w[cur][i]);
    }
    return dp[cur][visited];
}

int main(void){
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &w[i][j]);
        }
    }

    memset(dp, -1, sizeof(dp));

    printf("%d",tsp(0, 1));
}