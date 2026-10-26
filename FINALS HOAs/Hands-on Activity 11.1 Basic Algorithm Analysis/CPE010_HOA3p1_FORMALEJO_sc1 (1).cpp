#include <iostream>
using namespace std;

bool Unique(int A[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);

    if (Unique(A, n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
