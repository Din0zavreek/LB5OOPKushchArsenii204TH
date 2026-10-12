#include <iostream>
#include <windows.h>
#include "Bank.h" // Підключаємо заголовок класу з бібліотеки

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    cout << "--- Перевірка роботи статичної бібліотеки (ЛБ №5) ---" << endl;

    Money m1(10, 5, 2, 1, 0, 3, 1, 4, 2, 1);
    cout << "Перша сума (m1): ";
    m1.Display();

    Money m2(4, 2, 1, 1, 1, 1, 0, 2, 1, 0);
    cout << "Друга сума (m2): ";
    m2.Display();

    Money sum = m1 + m2;
    cout << "Сума (m1 + m2): ";
    sum.Display();

    Money diff = m1 - m2;
    cout << "Різниця (m1 - m2): ";
    diff.Display();

    double div = m1 / m2;
    cout << "Ділення (m1 / m2): " << div << endl;

    return 0;
}