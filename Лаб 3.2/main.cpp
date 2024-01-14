#include <iostream>
#include <cmath>
using namespace std;

// lab 3.2
// var 18
int main() {
    double x, a, b, c, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;


    // проста форма
    if(x < 0 && b != 0){
        F = (a*pow(x, 2)) - (b*pow(x,2));
    }
    if (x > 0 && b == 0){
        F = (x - a)/(x - c);
    }
    if (!(x < 0 && b != 0) && !(x > 0 && b == 0)) {
        F = (x + 5)/(c*(x - 10));
    }

    cout << endl;
    cout << "1) F = " << F << endl;


    // розгорнута форма
    if(x < 0 && b != 0){
        F = (a*pow(x, 2)) - (b*pow(x,2));
    }
    else if (x > 0 && b == 0) {
        F = (x - a)/(x - c);
    }
    else {
        F = (x + 5)/(c*(x - 10));
    }

    cout << endl;
    cout << "1) F = " << F << endl;

    return 0;
}