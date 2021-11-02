#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *p, const void *q){
    int a, b;
    a = strlen(p);
    b = strlen(q);
    if(a == b){
        return strcmp((char *)p, (char *)q);
    }else if(a > b) return 1;
    else return -1;
}
int main(){
    int N, i;
    scanf("%d",&N);
    char word[N][51];
    for(i = 0; i < N; i++){
        scanf("%s",word[i]);
    }
    qsort(word, N, sizeof(word[0]), compare);
    for(i = 0; i < N; i++){
        if(!strcmp(word[i], word[i+1])) continue;
        else printf("%s\n",word[i]);
    }
    return 0;
}