#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arrays(n);

    // Input the arrays
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arrays[i] = vector<int>(k);
        for (int j = 0; j < k; ++j) {
            cin >> arrays[i][j];
        }
    }

    // Process the queries
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << arrays[a][b] << endl;
    }

    return 0;
}
