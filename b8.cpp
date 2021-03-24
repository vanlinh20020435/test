#include <iostream>
#include <cmath>
using namespace std;

int a[100];
int d = 0;
void print(int n, int d) {
    if (n == 0) {
        for (int i = 1; i <= d; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int value = a[d] + 1; value <= n; value++) {
        a[d + 1] = pow(value,2);
        print(n - pow(value,2), d + 1);
    }

}

int main() {
    int n;
    cin >> n;
    a[0] = 0;
    print(n, 0);

}
