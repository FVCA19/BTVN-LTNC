#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;

        bool found = false;
        int index = -1;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                found = true;
                index = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (found && arr[index] == x) {
            cout << "Yes " << (index + 1) << endl;
        } else {
            cout << "No " << (index + 1) << endl;
        }
    }

    return 0;
}
