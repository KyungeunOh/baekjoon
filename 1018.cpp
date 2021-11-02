#include <iostream>
#include <string>

using namespace std;

string input[51];
string BF[8]={"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"};
string WF[8]={"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"};

// Black First Check
int B_F(int a, int b){
    int num = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(input[i + a][j + b] != BF[i][j]) num++;
        }
    }
    return num;
}
// White First Check
int W_F(int a, int b){
    int num = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(input[i + a][j + b] != WF[i][j]) num++;
        }
    }
    return num;
}

int main() {
    int M, N, min = 2501;
    cin >> M >> N;
    for(int i = 0; i < M; i++) cin >> input[i]; // M개의 string input
    for(int i = 0; i + 8 <= M; i++){ // 8개씩 행 보내기
        for(int j = 0; j + 8 <= N; j++){ // 8개씩 열 보내기
            int a, b;
            a = B_F(i,j); b = W_F(i,j); 
            // Black First, White First min 구하기
            if(a > b) a = b;
            if(a < min) min = a;
        }
    }
    cout << min;
}
