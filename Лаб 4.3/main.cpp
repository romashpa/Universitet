#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

// lab 4.3
// var 18
int main() {

    double x, xp, xk, dx;
    double a, b, c, F;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << "dx = ";
    cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |" << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk) {
        F = 0;
        if (x < 0 && b != 0) {
            F = (a * pow(x, 2)) - (b * pow(x, 2));
        } else if (x > 0 && b == 0) {
            F = (x - a) / (x - c);
        } else {
            F = (x + 5) / (c * (x - 10));
        }

        cout << "|" << setw(7) << setprecision(2) << x <<
             " |" << setw(10) << setprecision(3) << F << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;

}