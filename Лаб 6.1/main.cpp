#include <iostream>
#include <cstdlib>
#include <ctime>

const int arraySize = 26;
const int lowerBound = 3;
const int upperBound = 92;

void generateRandomArray(int arr[], int size, int lower, int upper) {
    srand(time(0)); // Ініціалізація генератора випадкових чисел
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % (upper - lower + 1) + lower; // Генеруємо випадкові числа в заданому діапазоні
    }
}

void processArray(int arr[], int size) {
    int sum = 0;
    int count = 0;

    // Обчислення суми та кількості елементів, що задовольняють критерію
    for (int i = 0; i < size; ++i) {
        if ((arr[i] % 2 != 0) || (i % 7 == 0)) {
            sum += arr[i];
            count++;
            arr[i] = 0; // Заміна елементів, що задовольняють критерію, нулями
        }
    }

    // Виведення результатів
    std::cout << "Кількість елементів, що задовольняють критерію: " << count << std::endl;
    std::cout << "Сума цих елементів: " << sum << std::endl;
}

void displayArray(int arr[], int size) {
    std::cout << "Масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int r[arraySize];

    std::cout << "Введіть дані для генерації масиву:" << std::endl;

    generateRandomArray(r, arraySize, lowerBound, upperBound);

    std::cout << "Початковий ";
    displayArray(r, arraySize);

    // Виклик функції для обробки масиву
    processArray(r, arraySize);

    std::cout << "Змінений ";
    displayArray(r, arraySize);

    return 0;
}
