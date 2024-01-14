#include <iostream>

#include <iostream>
#include <cmath>
using namespace std;

// lab 4.1
// var 18
int main() {
    int k, N, i;
    double S;

    cout << "k = "; cin >> k;

    i = k;
    S = 0;
    while (i <= 15)
    {
        S += (cos(i))/(1 + pow(sin(i), 2));
        i++;
    }
    cout << "S (while) = " << S << endl;


    i = k;
    S = 0;

    do {
        S += (cos(i))/(1 + pow(sin(i), 2));
        i++;
    } while (i <= 15);

    cout << "S (do-while) = " << S << endl;

    S = 0;

    for (i = k; i <= 15; i++) {
        S += (cos(i))/(1 + pow(sin(i), 2));
    }

    cout << "S (for increment) = " << S << endl;


    S = 0;

    for (i = 15; i >= k; i--) {
        S += (cos(i))/(1 + pow(sin(i), 2));
    }

    cout << "S (for decrement) = " << S << endl;


    return 0;
}