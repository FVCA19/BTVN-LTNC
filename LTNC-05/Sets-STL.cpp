#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> mySet;
    vector<string> results;

    for (int i = 0; i < n; ++i) {
        int type_query, x;
        cin >> type_query >> x;

        if (type_query == 1) {
            mySet.insert(x);
        } else if (type_query == 2) {
            mySet.erase(x);
        } else if (type_query == 3) {
            if (mySet.find(x) != mySet.end()) {
                results.push_back("Yes");
            } else {
                results.push_back("No");
            }
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
