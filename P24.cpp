#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ifstream in("text.txt");
    const int a = 174457, b = 174505;
    for(int i = a; i <= b; i++) {
        int count = 0, x, y;
        if(i == (int)sqrt(i)*(int)sqrt(i)) continue;

        for(int j = 2; j < sqrt(i); j++){
            if(i %j == 0){
                x = j;
                y = i / j;
                count += 2;
            }
        }

        if(count == 2)
            cout << x << ' ' << y << '\n';
    }
}