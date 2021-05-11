#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;

    int N, i, n;
    scanf("%d",&N);
    
    // initial setting
    for(i = 1; i < N; i++){
        q.push(i);
    } n = N;

    // empty 상태가 될 때까지
    while(!q.empty()){
        // Before first pop, last element N push
        // After first pop, 2nd pop element push
        // for while statement
        q.push(n);
        q.pop(); // throw element
        n = q.front();
        q.pop(); // 2nd element
    }
    printf("%d",n);

}