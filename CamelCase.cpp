#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
  int count = 1;
  int size = s.size();
  for (int i = 0; i < size; i++ ){
    if (s[i] >= 'A' && s[i] <= 'Z') count ++;
  }
  return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
