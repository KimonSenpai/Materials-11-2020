#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main() {
    int N;
    ifstream in("26.txt");
    in >> N;
    vector<vector<int>> mas(10000/500);
    for (int i = 0; i < N; i++) {
        int a;
        in >> a;
        mas[a / 500].push_back(a);
    }
    for(auto& v: mas) {
        sort(v.begin(), v.end());
    }
    int s = 0, m = 0; 
    for (int i = 0; i < mas.size(); i++) {
        for (int j = 0; j < mas[i].size() / 2; j++) {
            s += mas[i][j];
            m = max(m, mas[i][j]);
        }
    }
    cout << s/2 << ' ' << m/2 << '\n';
}