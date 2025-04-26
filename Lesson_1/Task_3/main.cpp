#include <iostream>
#include <cmath>  // Для функции abs
using namespace std;

// Функция для рисования ромба
void romboid(int amount) {
    if (amount % 2 == 0) {
        amount += 1; // Делаем нечётным для красивого ромба
    }

    int mid = amount / 2;
    int left = mid;
    int right = mid;

    for (int row = 0; row < amount; row++) {
        for (int col = 0; col < amount; col++) {
            if (col >= left && col <= right) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        if (row < mid) {
            left--;
            right++;
        } else {
            left++;
            right--;
        }

        cout << endl;
    }
}

// Функция для рисования спирали
void spiral(int size) {
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            // Отразить координаты в левый верхний квадрант
            int mirrored_col = col;
            int mirrored_row = row;
            if (mirrored_col >= size / 2) mirrored_col = size - mirrored_col - 1;
            if (mirrored_row >= size / 2) mirrored_row = size - mirrored_row - 1;

            // Вычислить расстояние от центра
            int dist_to_center_col = abs(mirrored_col - size / 2);
            int dist_to_center_row = abs(mirrored_row - size / 2);
            int distance_from_center = max(dist_to_center_col, dist_to_center_row);
            int spiral_layers = size / 2;
            if (size % 4 == 0) spiral_layers--;

            // Исправить диагональ сверху слева направо вниз
            if (row == col + 1 && row <= spiral_layers) distance_from_center++;

            // Печать звезды или пробела
            cout << ((distance_from_center + size / 2) % 2 == 0 ? "*" : " ");
        }
        cout << endl;
    }
}

int main() {
    int amount;
    cout << "Enter the amount of stars: ";
    cin >> amount;

    cout << "\nSpiral:\n";
    spiral(amount);

    cout << "\nRomboid:\n";
    romboid(amount);

    return 0;
}
