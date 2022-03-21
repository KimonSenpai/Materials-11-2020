#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    ifstream in("24.txt");
    getline(in, str);
    int count = 0;

    for(auto p = str.begin() + 2; p < str.end() - 2; p++) {
        if(p[-2] == p[2] && p[-1] == p[1]) {
            count++;
        }
    }
    cout << count << '\n';
}
