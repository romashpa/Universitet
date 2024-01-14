#include <iostream>

void swapElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        // Обмін елементів на парних і непарних позиціях
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    const int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6};

    std::cout << "Початковий масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    swapElements(arr, size);

    std::cout << "\nМасив після заміни: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
