#include <iostream>
#include <set>

using namespace std;

int main(void){
    set<int> s;
    int A, B, i, j, x;
    cin >> A >> B;
    while(A--){
        cin >> x;
        s.insert(x);
    }
    while(B--){
        cin >> x;
        if(s.count(x)) s.erase(x);
        else s.insert(x);
    }
    cout << s.size();
}