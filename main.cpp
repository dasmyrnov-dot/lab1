```cpp
#include <iostream>
using namespace std;

int main() {
    long long A, x, y;

    cin >> A;

    x = A * A;
    y = x * A;
    x = x * y;
    y = x * x;
    A = y * x;

    cout << A;

    return 0;
}
```

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


