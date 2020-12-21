#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in("27-B.txt");
    int n;
    in >> n;
    int sum, minD;
    minD = 20000;
    sum = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        in >> a >> b;
        sum += max(a, b);
        int c = abs(a - b);
        if(c % 3 != 0 && c < minD)
            minD = c;
    }
    if(sum % 3 == 0)
        sum -= minD;
    cout << sum << '\n';
}