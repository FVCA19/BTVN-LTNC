#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max = 0;
    if ( a > max) max = a;
    if ( b > max) max = b;
    if ( c > max) max = c;
    if ( d > max) max = d;
    cout << max;
    return 0;
}
