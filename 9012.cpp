#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        string str;
        cin >> str;
        stack<char> s;
        string ans = "YES";
        for(int j = 0; j < str.length(); j++){
            char c = str[j];
            if(c == '(') s.push(c);
            else if(!s.empty() && c == ')' && s.top() == '(') s.pop();
            else{
                ans = "NO";
                break;
            }
        }
        if(!s.empty()) ans = "NO";
        
        cout << ans << endl;
    }
}
