#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++){
    cin >> vec[i];
  }
  int x;
  cin >> x;
  vec.erase(vec.begin() + x - 1  );
  int a, b;
  cin >> a >> b;
  vec.erase(vec.begin() + a - 1 , vec.begin() + b - 1);
  int size = vec.size();
  cout << size << endl;
  for (int i = 0; i < size; i++){
    cout << vec[i] << " ";
  }
    return 0;
}
