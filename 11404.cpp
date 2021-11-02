#include <iostream>
#include <algorithm>
using namespace std;

// #define INF 1234567890
const int MN = 101;
const int INF = 1e9; // 1e9 define으로 하면 double형이 됨. 조심.

int floyd[MN][MN];


int main(void){
    int N, M;  cin >> N >> M;

    // 초기값 설정
    // int arr[10];
    // fill(arr, arr + 10, 1); // arr 처음부터 끝까지 1로 채우기
    fill(&floyd[0][0], &floyd[MN - 1][MN], INF); // 마지막 주소 + 1

    // 자기 자신 0으로
    for(int i = 0; i <= N; i++){
        floyd[i][i] = 0;
    }

    for(int i = 0; i < M; i++){
        int u, v, w; cin >> u >> v >> w;
        floyd[u][v] = min(floyd[u][v], w);
    }

    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                floyd[i][j] = min(floyd[i][j], floyd[i][k] + floyd[k][j]);
            }
        }
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << (floyd[i][j] == INF ? 0 : floyd[i][j]) << ' ';
        }
        cout << '\n';
    }
}