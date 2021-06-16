#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    m["aaa"] = 5;
    cout << m.count("a") << ' ' << m.count("aaa") << ' ' << m["aaa"] << '\n';
    m["aaa"] = 7;
    cout << m.count("a") << ' ' << m.count("aaa") << ' ' << m["aaa"] << '\n';
}