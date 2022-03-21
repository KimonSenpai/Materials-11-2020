#include <iostream>
//#include <cmath>
using namespace std;

int main() {

    for(int i = 1e6; i <= 2e6; i++) {
        int count = 0;
        for(int j = 1; j*j <= i; j++) {
            if(i % j == 0 && i/j - j <= 100) {
                count++;
                if(count == 3) break;
            }
        }
        if(count == 3) cout << i << '\n';
    }
}