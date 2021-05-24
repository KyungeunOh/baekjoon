#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    int N, n;
    scanf("%d",&N);

    char cmd[6];
    for(int i = 0; i < N; i++){
        scanf("%s",cmd);
        if(!(strcmp(cmd,"push"))){
            scanf("%d",&n);
            s.push(n);
            continue;
        } else if(!(strcmp(cmd,"pop"))){
            if(s.empty()) printf("-1");
            else{
                printf("%d",s.top());
                s.pop();
            }
        } else if(!(strcmp(cmd,"size"))){
            printf("%lu",s.size());
        } else if(!(strcmp(cmd,"empty"))){
            printf("%d",s.empty());
        } else if(!(strcmp(cmd,"top"))){
            if(s.empty()) printf("-1");
            else printf("%d",s.top());
        } printf("\n");
    }
}