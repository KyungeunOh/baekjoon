// I tried to bubble sort, but it's timed out.
#include <iostream>
#include <cstring>

// qsort compare function
int compare(const void *p, const void *q){
    int a, b;
    a = strlen((char *)p);
    b = strlen((char *)q);
    if(a == b){
        // if the length is same, sort in dictionary order.
        return strcmp((char *)p, (char *)q);
    } else if(a > b) return 1;
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
        // if the words are same, pass one word.
        if(!strcmp(word[i], word[i+1])) continue;
        else printf("%s\n",word[i]);
    }
    return 0;
}