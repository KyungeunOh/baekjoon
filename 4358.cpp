#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int N = 0;
    string str;
    map<string, int> m;
    while(getline(cin, str)){
        N++;
        m[str]++;
    }
    cout << fixed;
    cout.precision(4);
    for(auto itr = m.begin(); itr != m.end(); itr++){
        string name = itr -> first;
        double n = itr -> second;
        n/=N;
        n*=100.0;
        cout << name << ' ' << n << '\n';
    }
}