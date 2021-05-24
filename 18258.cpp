#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int N, n;
    scanf("%d",&N);
    
    char cmd[6];
    for(int i = 0; i < N; i++){
        scanf("%s",cmd);
        if(!strcmp(cmd,"push")){
            scanf("%d",&n);
            q.push(n);
            continue;
        } else if(!strcmp(cmd,"pop")){
            if(q.empty()) printf("-1");
            else{
                printf("%d",q.front());
                q.pop();
            }
        } else if(!strcmp(cmd,"size")){
            printf("%lu",q.size());
        } else if(!strcmp(cmd,"empty")){
            printf("%d",q.empty());
        } else if(!strcmp(cmd,"front")){
            if(q.empty()) printf("-1");
            else printf("%d",q.front());
        } else if(!strcmp(cmd,"back")){
            if(q.empty()) printf("-1");
            else printf("%d",q.back());
        } printf("\n");
    }
}