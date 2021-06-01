#include <iostream>
#include <stack>
using namespace std;
int main(){
    int K, n, i, sum = 0;
    stack<int> s;
    scanf("%d", &K);
    for(i = 0; i < K; i++){
        scanf("%d", &n);
        if(n == 0){
            sum -= s.top();
            s.pop();
        } else {
            s.push(n);
            sum += n;
        }
    }
    printf("%d",sum);
}