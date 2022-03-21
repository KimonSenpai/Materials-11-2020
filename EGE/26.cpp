#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int S, N;
    ifstream in("27881.txt");
    in >> S >> N;
    vector<int> mas(N);
    for(int i = 0; i < N; i++) {
        in >> mas[i];
    }

    sort(mas.begin(), mas.end());

    int last, count;
    count = last = 0;
    for(int i = 0; i < N; i++) {
        S -= mas[i];
        
        if(S >= 0) {
            count++;
            last = i;
        } else {
            S += mas[i];
            break;
        }
    }
    S += mas[last];
    for(int i = 0; i < N; i++) {
        if(mas[i] <= S) {
            last = i;
        } else {
            break;
        }
    }

    cout << count << ' ' << mas[last] << ' ' << S << '\n';
}
