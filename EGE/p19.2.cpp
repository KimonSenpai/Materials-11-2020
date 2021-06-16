#include <bits/stdc++.h>
using namespace std;
/***
 * start: 10, S(1..58)
 * actions: +1, I*2, II*3
 * win: >=69
 ***/
const int win = 69;
map<pair<int, int>, int> R;
int f(int i, int j) {
    //if(i > j) swap(i, j);//!!!
    if(i + j >= win) return 0;//change
    if(R.count({i, j})) return R[{i, j}];
    vector<int> mas = {f(i+1, j), f(i, j+1), f(i*2, j), f(i, j*3)};//change
    sort(mas.begin(), mas.end());
    int res;
    if(mas[0] > 0) {
        res = -mas.back() - 1;
    } else {
        for(int v: mas) res = (v <= 0 ? v : res);//if v <= 0 then v else res
        res = -res + 1;
    }
    R[{i, j}] = res;
    return res;
}

int main() {
    for(int s = 1; s <= 58; s++) {
        if(f(10, s*3) == 1 || f(10*2, s) == 1 || f(10, s+1) == 1 || f(10+1, s) == 1){
            cout << s << '\n';
            break;
        }
    }
    for(int s = 1; s <= 58; s++) {
        if(f(10, s) == +3){
            cout << s << '\n';
            
        }
    }
    for(int s = 1; s <= 58; s++) {
        if(f(10, s) == -4){
            cout << s << '\n';
            
        }
    }
}