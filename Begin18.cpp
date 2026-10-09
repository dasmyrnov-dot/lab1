#include <iostream>
using namespace std;

int main()
{
    // A - початкове число
    // x - допоміжна змінна
    double A, x;

    // Введення числа A
    cin >> A;

    // Обчислюємо A^2
    x = A * A;
    cout << "A^2 = " << x << endl;

    // Обчислюємо A^4
    x = x * x;
    cout << "A^4 = " << x << endl;

    // Обчислюємо A^8
    x = x * x;
    cout << "A^8 = " << x << endl;

    return 0;
}
