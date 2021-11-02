#include <iostream>
using namespace std;

const int MN = 101;
int floyd[MN][MN];

int main(void){
    int N;  cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> floyd[i][j];
        }
    }

    for(int k = 0; k < N; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(floyd[i][k] && floyd[k][j]) floyd[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << floyd[i][j] << ' ';
        }
        cout << '\n';
    }
}