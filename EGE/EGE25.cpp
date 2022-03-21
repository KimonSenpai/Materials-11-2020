#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n = 1;
    for(int i = 11275; i <= 16328; i++) {
        int count = 2;
        vector<int> divs;
        for(int j = 1; j*j <= i; j++){
            if(i%j == 0) {
                divs.push_back(j);
                if(j != i/j) divs.push_back(i/j);
            }
        }
        if(divs.size() == 5) {
            sort(divs.begin(), divs.end());
            cout << divs[2] << ' ' << divs[3] << '\n';
        }
    }
}