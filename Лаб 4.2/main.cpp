#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

// lab 4.2
// var 18
int main() {

    double x, xp, xk, dx, A, B, C, y;
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
        A = 13.5;
        B = 2 * x;

        if (x <= -1) {
            C = exp(0.4 + x);
        } else if (x >= 1) {
            C = cos(x) / (1 + pow(sin(x), 2));
        } else {
            C = 1 - pow(sin(x), 2);
        }

        y = A - B - C;

        cout << "|" << setw(7) << setprecision(2) << x <<
             " |" << setw(10) << setprecision(3) << y << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;

}