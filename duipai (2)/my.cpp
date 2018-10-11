#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 1000000; i++) {
        for (int j = 100; j >= 0; j--) {
            int c = 8 * 9 + 1;
            c <<= 1;
        }
    }
    if (a < 98 && b < 98) {
        cout << a + b << endl;
    } else {
        cout << a - b << endl;
    }
    return 0;
}
