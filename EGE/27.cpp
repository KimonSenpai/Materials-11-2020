#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m1[2] = {}, m17[2] = {};
    int mSum, a, b;
    a = b = mSum = 0;

    int N;
    fstream in("27991_B.txt");
    in >> N;
    for(int i = 0; i < N; i++) {
        int val;
        in >> val;
        if(val%17 != 0) {
            if(val + m17[val%2] > mSum) {
                mSum = val + m17[val%2];
                a = m17[val%2];
                b = val;
            }
            m1[val%2] = max(m1[val%2], val);
        } else {
            if(val + m17[val%2] > mSum) {
                mSum = val + m17[val%2];
                a = m17[val%2];
                b = val;
            }
            if(val + m1[val%2] > mSum) {
                mSum = val + m1[val%2];
                a = m1[val%2];
                b = val;
            }
            m17[val%2] = max(m17[val%2], val);
        }
    }
    cout << a << ' ' << b << '\n';
}