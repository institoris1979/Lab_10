#ifndef LAB10_TASKS_H
#define LAB10_TASKS_H

#include <iostream>
#include <cmath>
#include <vector>

// --- ЗАВДАННЯ 1 (Param79) ---
struct TTime {
    int Hour;
    int Min;
    int Sec;
};

// Допоміжна функція перевірки правильності часу (з Param71)
int CheckTime(TTime T);
// Функція додавання секунд
TTime AddSec(TTime T, int N);
// Метод-обгортка для виклику Завдання 1
void runTask1_Param79();

// --- ЗАВДАННЯ 2 (Begin15) ---
struct CircleTask {
    double S; // Вхідні дані: площа
    double D; // Вихідні дані: діаметр
    double L; // Вихідні дані: довжина кола
};

void processCircle(CircleTask* c);
void runTask2_Begin15();

// --- ЗАВДАННЯ 2 (Boolean32) ---
struct TriangleTask {
    int a, b, c;  // Вхідні дані: сторони
    bool isRight; // Вихідні дані: чи є прямокутним
};

void processTriangle(TriangleTask* t);
void runTask2_Boolean32();

#endif // LAB10_TASKS_H