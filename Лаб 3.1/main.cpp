#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = ";
    cin >> x;

    A = 13.5 - 2 * x;

    // спосіб 1: розгалуження в скороченій формі
    if (x <= -1)
        B = exp(0.4 + x);
    if (-1 < x && x < 1)
        B = 1 - pow(sin(x), 2);
    if (x >= 1)
        B = cos(x) / (1 + pow(sin(x), 2));
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x <= -1)
        B = exp(0.4 + x);
    else if (-1 < x && x < 1)
        B = 1 - pow(sin(x), 2);
    else
        B = cos(x) / (1 + pow(sin(x), 2));

    y = A - B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}