#include <iostream>
using namespace std;

int main()
{
    // L - довжина кола
    // R - радіус кола
    // S - площа круга
    double L, R, S;

    // Значення числа PI за умовою задачі
    const double PI = 3.14;

    // Введення довжини кола
    cin >> L;

    // Обчислюємо радіус за формулою L = 2 * PI * R
    R = L / (2 * PI);

    // Обчислюємо площу круга за формулою S = PI * R^2
    S = PI * R * R;

    // Виведення результатів
    cout << "R = " << R << endl;
    cout << "S = " << S << endl;

    return 0;
}
