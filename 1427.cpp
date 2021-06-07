#include <iostream>
#include <algorithm>
using namespace std;
bool desc(int a, int b){ return a > b; }
int main(){
    char num[11];
    int i;
    scanf("%s",num);
    for(i = 0; num[i] != '\0'; i++);
    sort(num, num + i, desc);
    printf("%s",num);
}