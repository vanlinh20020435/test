#include <iostream>
#include <cmath>
using namespace std;
int a[100];
int d = 0;
void print(int n,int x ,int d) {
    if (n == 0) {
        for (int i = 1; i <= d; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int value = pow(a[d],1/(double)x) + 1; value <= pow(n,1/(double)x); ++value) {
        a[d + 1] = pow(value,x);
        print(n - pow(value,x),x ,d + 1);
    }

}
int main() {
    int n,x;
    cin >> n>>x;
    a[0] = 0;
    print(n,x,0);
    return 0;
}
