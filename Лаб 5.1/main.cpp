#include <iostream>
#include <cmath>
using namespace std;

double g(double x, double y) {
    return (sin(x) * sin(x) + cos(y) * cos(y)) / (1 + abs(x * y));
}

int main() {
    double r, s;
    cout << "Введіть значення для r та s: ";
    cin >> r >> s;

    double numerator = g(r * r, s + 1) + g(1, r * r + s);
    double denominator = 1 + g(1, r * s);

    if (denominator != 0) { // Перевірка, щоб уникнути ділення на нуль
        double result = numerator / denominator;
        cout << "Результат: " << result << endl;
    }
    else {
        cout << "Знаменник дорівнює нулю. Неможливо обчислити вираз." << endl;
    }

    return 0;
}