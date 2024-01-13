#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;  // вхідний параметр
    double b;  // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    z1 = ((a+2) / sqrt(2*a) - (a / (sqrt(2*a) + 2)) + 2 / (a - sqrt(2*a))) * (sqrt(a) - sqrt(2))/sqrt(a+2);
    z2 = 1/sqrt(a) + sqrt(2);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}




