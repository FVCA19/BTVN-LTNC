#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sumA = 0, sumB = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sumA += num;
    }
    for (int i = 0; i < n + 1; ++i) {
        int num;
        cin >> num;
        sumB += num;
    }
    cout << (sumB - sumA) << endl;

    return 0;
}
