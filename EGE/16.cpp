#include <iostream>
#include <map>
using std::map;
using std::cout;

/*
F(n) = 1, при n < -100000,

F(n) = F(n – 1) + 3*F(n – 3) + 2, при n > 10,

F(n) = -F(n – 1) для остальных случаев.
*/

int F(int n) {
    static map<int, int> m;
    if(m.count(n)) return m[n];

    if(n > 10) {
        m[n] = F(n - 1) + 3*F(n - 3) + 2;
    } else if(n%2) {
        m[n] = 1;
    } else {
        m[n] = -1;
    }

    return m[n];
}

int main() { 
    cout << F(20) << '\n';
}