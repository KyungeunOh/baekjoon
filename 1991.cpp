#include <iostream>
#include <stdlib.h>
typedef struct Node{
    char left;
    char right;
}Node;

Node node[26];

void preorder(char root){
    if(root == '.') return;
    else{
        printf("%c",root);
        preorder(node[root-'A'].left);
        preorder(node[root-'A'].right);
    }
}

void inorder(char root){
    if(root == '.') return;
    else{
        inorder(node[root-'A'].left);
        printf("%c",root);
        inorder(node[root-'A'].right);
    }
}

void postorder(char root){
    if(root == '.') return;
    else{
        postorder(node[root-'A'].left);
        postorder(node[root-'A'].right);
        printf("%c",root);
    }
}

int main(){
    
    int N = 0;
    char root, left, right;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        getchar(); // enter buffer getchar
        scanf("%c %c %c", &root, &left, &right);
        node[root-'A'].left = left;
        node[root-'A'].right = right;
    }

    preorder('A');
    printf("\n");

    inorder('A');
    printf("\n");

    postorder('A');
    printf("\n");
}