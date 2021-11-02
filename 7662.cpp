#include <iostream>
#include <set>

using namespace std;

int main(void){
    int T, k, n;
    char cmd;
<<<<<<< HEAD
=======
    
>>>>>>> 969517042ed4f2c3cd876d9956559effa92bdc59
    cin >> T;
    while(T--){
        cin >> k;
        multiset<int> ms;
        while(k--){
            cin >> cmd >> n;
            if(cmd == 'I') ms.insert(n);
            else {
                if(!ms.empty() && n == -1) ms.erase(ms.begin());
                else if(!ms.empty() && n == 1){
                    auto itr = ms.end();
                    itr--;
                    ms.erase(itr);
                }
            }
        }
        if(ms.empty()) cout << "EMPTY" << '\n';
        else{
            auto itr = ms.end();
            itr--;
            cout << *itr << ' ' << *ms.begin() << '\n';
        }
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> 969517042ed4f2c3cd876d9956559effa92bdc59
