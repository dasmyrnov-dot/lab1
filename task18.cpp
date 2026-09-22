#include <iostream>
using namespace std;

int main() {
    long long A, x;

    cin >> A;

    x = A * A;     // A^2
    cout << x << " ";

    x = x * x;     // A^4
    cout << x << " ";

    x = x * x;     // A^8
    cout << x;

    return 0;
}
