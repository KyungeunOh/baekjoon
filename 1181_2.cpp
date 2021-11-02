#include <iostream>
#include <cstring>
int main(){
    int N, i, j;
    char tmp[51];
    scanf("%d",&N);
    char word[N][51];
    for(i = 0; i < N; i++){
        scanf("%s", word[i]);
    }
    for(i = 0; i < N - 1; i++){
        for(j = 0; j < N - i - 1; j++){
            int a = strlen(word[j]);
            int b = strlen(word[j+1]);
            if(a > b){
                strcpy(tmp, word[j]);
                strcpy(word[j], word[j+1]);
                strcpy(word[j+1], tmp);
            } else if(a == b){
                if(strcmp(word[i], word[j+1]) > 0){
                    strcpy(tmp, word[j]);
                    strcpy(word[j], word[j+1]);
                    strcpy(word[j+1], tmp);
                }
            }
        }
    }
    for(i = 0; i < N - 1; i++){
        if(!strcmp(word[i], word[i+1])) continue;
        else printf("%s\n", word[i]);
    } printf("%s\n",word[i]);
    return 0;
}
