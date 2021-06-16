#include <iostream>
int main(){
    int N, i, j, n;
    int arr[10001] = {0};
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d",&n);
        arr[n]++;
    }
    for(i = 0; i < 10001; i++){
        for(j = 0; j < arr[i]; j++){
            printf("%d\n",i);
        }
    }
}