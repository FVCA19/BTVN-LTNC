#include<bits/stdc++.h>
using namespace std;


int main() {


    int numQueries;
    cin >> numQueries;

    map<string, int> marks;
    vector<int> output;

    for (int i = 0; i < numQueries; ++i) {
        int queryType;
        cin >> queryType;
        if (queryType == 1) {
            string studentName;
            int studentMarks;
            cin >> studentName >> studentMarks;
            marks[studentName] += studentMarks;
        } else if (queryType == 2) {
            string studentName;
            cin >> studentName;
            marks.erase(studentName);
        } else if (queryType == 3) {
            string studentName;
            cin >> studentName;
            if (marks.find(studentName) != marks.end()) {
                output.push_back(marks[studentName]);
            } else {
                output.push_back(0);
            }
        }
    }
    for (size_t i = 0; i < output.size(); ++i) {
    cout << output[i] << endl;
}
    return 0;
}
