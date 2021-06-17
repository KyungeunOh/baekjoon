#include <iostream>

int main(){
    int N, Q, i, j, total, num;
    scanf("%d %d", &N, &Q);
    int A[N], S[N];
    for(i = 0; i < N; i++) scanf("%d",&A[i]);
    total = 0;
    for(i = 0; i < N; i++){
        S[i] = 1;
        for(j = i; j < i + 4; j++){
            if(j >= N) S[i] *= A[j-N];
            else S[i] *= A[j];
        }
        total += S[i];
    }
    for(i = 0; i < Q; i++) {
        scanf("%d",&num);
        num -= 1;
        for(j = 0; j < 4; j++){
            S[num] *= -1; // 바뀐 부호 곱해주기
            total += 2 * S[num]; 
            // total - 기존 S[num] + S[num]인데 
            // 기존 S[num]에 - 곱해주니까 total + 2 * S[num]
            if(--num == -1) num = N - 1;
        }
        printf("%d\n",total);
    }
}