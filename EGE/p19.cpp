#include <iostream>
#include <algorithm>
using namespace std;


int f(int i, int j) {
    if(i + j >= 44)
        return 0;
    int res[] = {f(i, i + j), f(j, i + j)};
    sort(res, res+2);
    if(res[0] > 0) {
        return  -res[1] - 1;
    } else {
        int r;
        for(int val: res) r = ((val <= 0)? val: r);
        return -r + 1;
    }
}

int main() {
    for(int d = 0; d < 44; d++){
        for(int s = 1; s <= 44; s++) {
            if(f(s, s + d) == 3)cout << s << ' ' << s + d << '\n';
        }
    }
}