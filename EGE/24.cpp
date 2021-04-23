#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream in("24_demo (2).txt");
    string str;
    in >> str;
    int c, maxc;
    maxc = c = 0;
    for(char s: str) {
        if(s == 'Y'){
            c++;
        } else {
            maxc = max(maxc, c);
            c = 0;
        }

    }
    maxc = max(maxc, c);
    cout << maxc << '\n';

}