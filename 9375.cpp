#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int T, N, i;
    string name, kind;
    cin >> T;
    while(T--){
        map<string, int> m;

        cin >> N;
        while(N--){
            cin >> name >> kind;
            if(m.find(kind) == m.end()) m.insert(make_pair(kind, 1));
            else m[kind]++;
        }

        int ans = 1;
        for(auto kind : m) ans *= kind.second + 1;
        ans -= 1;
        cout << ans << '\n';
    }
}