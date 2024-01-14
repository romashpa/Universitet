#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Функція для обчислення доданка ряду Тейлора
double calculateTerm(double x, int n) {
    return pow(-1, n) * pow(x - 1, n + 1) / (n + 1);
}

// Функція для обчислення суми ряду Тейлора
double taylorSeriesSum(double x, double eps, int& termsCount) {
    double sum = 0;
    double term;
    termsCount = 0;

    do {
        term = calculateTerm(x, termsCount);
        sum += term;
        termsCount++;
    } while (fabs(term) > eps);

    return sum;
}

int main() {
    double xStart, xEnd, dx, eps;

    // Введення даних користувачем
    cout << "Введіть значення x початкове: ";
    cin >> xStart;

    cout << "Введіть значення x кінцеве: ";
    cin >> xEnd;

    cout << "Введіть крок dx: ";
    cin >> dx;

    cout << "Введіть точність ℰ: ";
    cin >> eps;

    // Виведення шапки таблиці
    cout << "\n|   X   | Значення функції | Сума ряду Тейлора | К-сть доданкiв |\n";
    cout << "|--------|------------------|-------------------|---------------|\n";

    for (double x = xStart; x <= xEnd; x += dx) {
        int count;
        double sum = taylorSeriesSum(x, eps, count);

        // Виведення результатiв у виглядi таблицi
        cout << "| " <<setw(6)<<x<<" | "<<setw(16)<<log(x)
             <<" | "<<setw(17)<<sum<<" | "<<setw(13)<<count<<" |\n";
    }

    return 0;
}