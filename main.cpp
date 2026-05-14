#include <iostream>
#include "lab10_tasks.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    int choice = 0;
    
    do {
        cout << "\n--- МЕНЮ ЛАБОРАТОРНОЇ РОБОТИ №10 (Варіант 8) ---\n";
        cout << "1. Виконати Завдання 1 (Param79 - Час)\n";
        cout << "2. Виконати Завдання 2 (Begin15 - Коло)\n";
        cout << "3. Виконати Завдання 2 (Boolean32 - Трикутник)\n";
        cout << "0. Вийти з програми\n";
        cout << "Ваш вибір: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                runTask1_Param79();
                break;
            case 2:
                runTask2_Begin15();
                break;
            case 3:
                runTask2_Boolean32();
                break;
            case 0:
                cout << "Завершення роботи.\n";
                break;
            default:
                cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    } while (choice != 0);

    return 0;
}