#include <iostream>
#include <string.h>
#include <deque>
using namespace std;
int main(){
    int N, tmp;
    char cmd[12];
    deque<int> dq;
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++){
        scanf("%s",cmd);
        if(strcmp(cmd, "push_front") == 0){
            scanf("%d", &tmp);
            dq.push_front(tmp);
            continue;
        } else if(strcmp(cmd, "push_back") == 0){
            scanf("%d", &tmp);
            dq.push_back(tmp);
            continue;
        } else if(strcmp(cmd, "pop_front") == 0){
            if(dq.empty()) printf("-1");
            else {
                printf("%d",dq.front());
                dq.pop_front();
            }
        } else if(strcmp(cmd, "pop_back") == 0){
            if(dq.empty()) printf("-1");
            else {
                printf("%d",dq.back());
                dq.pop_back();
            }
        } else if(strcmp(cmd, "size") == 0){
            printf("%lu",dq.size());
        } else if(strcmp(cmd, "empty") == 0){
            printf("%d",dq.empty());
        } else if(strcmp(cmd, "front") == 0){
            if(dq.empty()) printf("-1");
            else printf("%d",dq.front());
        } else if(strcmp(cmd, "back") == 0){
            if(dq.empty()) printf("-1");
            else printf("%d",dq.back());
        } printf("\n"); getchar();
    }
}