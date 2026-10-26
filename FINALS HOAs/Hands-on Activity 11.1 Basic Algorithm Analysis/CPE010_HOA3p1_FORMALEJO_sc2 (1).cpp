#include <iostream>
using namespace std;

// Regular recursive power
long long rpower(long long x, int n) {
    if (n == 0)
        return 1;

    return x * rpower(x, n - 1);
}

// Binary recursive power
long long brpower(long long x, int n) {
    if (n == 0)
        return 1;

    long long y;

    if (n % 2 == 1) {
        y = brpower(x, (n - 1) / 2);
        return x * y * y;
    }

    y = brpower(x, n / 2);
    return y * y;
}

int main() {
    cout << "rpower(2, 10) = "
         << rpower(2, 10) << endl;

    cout << "brpower(2, 10) = "
         << brpower(2, 10) << endl;

    return 0;
}
