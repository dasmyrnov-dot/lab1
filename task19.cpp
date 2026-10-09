#include <iostream>
using namespace std;

int main()
{
    // A - початкове число
    // x, y - допоміжні змінні
    double A, x, y;

    // Введення числа A
    cin >> A;

    // Обчислюємо A^2
    x = A * A;
    cout << "A^2 = " << x << endl;

    // Обчислюємо A^3
    y = x * A;
    cout << "A^3 = " << y << endl;

    // Обчислюємо A^5
    x = x * y;
    cout << "A^5 = " << x << endl;

    // Обчислюємо A^10
    y = x * x;
    cout << "A^10 = " << y << endl;

    // Обчислюємо A^15
    x = y * x;
    cout << "A^15 = " << x << endl;

    return 0;
}



