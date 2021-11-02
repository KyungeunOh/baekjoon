#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    int i, max_idx = -1, max_val = -1, cnt = 0;
    int alpha[26] = {0, };
    
    string str;
    cin >> str;
    
    for(i = 0; i < str.length(); i++){
        str[i] = toupper(str[i]);
        alpha[str[i] - 'A']++;
    }
    
    for(i = 0; i < 26; i++){
        if(alpha[i] == 0) continue;
        if(alpha[i] > max_val){
            max_val = alpha[i];
            max_idx = i;
        }
    }
    for(i = 0; i < 26; i++){
        if(alpha[i] == max_val) cnt++;
    }
    if(cnt > 1) cout << "?";
    else{
        char c = max_idx + 'A';
        cout << c;
    }
    return 0;
}
