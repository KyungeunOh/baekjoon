#include <iostream>
#include <algorithm>
using namespace std;

const int MN = 502;
const int INF = 1e9;
int floyd[MN][MN];

int main(void){
    int N, M;  cin >> N >> M;

    fill(&floyd[0][0], &floyd[MN - 1][MN], INF);
    // for(int i = 0; i < N; i++) floyd[i][i] = 0;

    for(int i = 0; i < M; i++){
        int a, b; cin >> a >> b;
        floyd[a][b] = 1;
    }

    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                floyd[i][j] = min(floyd[i][j], floyd[i][k] + floyd[k][j]);
            }
        }
    }

    int sum = 0;
    for(int i = 1; i <= N; i++){
        int cnt = 0;
        for(int j = 1; j <= N; j++){
            if(floyd[i][j] != INF || floyd[j][i] != INF) cnt++;
        }
        if(cnt == N - 1) sum++;
    }
    cout << sum << '\n';
}