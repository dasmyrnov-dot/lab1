#include <iostream>
using namespace std;

int main() {
    long long A, x, y;

    cin >> A;

    x = A * A;   // A^2
    y = x * A;   // A^3
    x = x * y;   // A^5
    y = x * x;   // A^10
    A = y * x;   // A^15

    cout << A;

    return 0;
}




