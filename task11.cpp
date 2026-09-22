#include <iostream>
using namespace std;

int main() {
    double L, R, S;
    const double pi = 3.14;

    cin >> L;

    R = L / (2 * pi);
    S = pi * R * R;

    cout << R << " " << S;

    return 0;
}
