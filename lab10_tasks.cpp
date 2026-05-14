#include "lab10_tasks.h"

using namespace std;

// ==========================================
// ЗАВДАННЯ 1: Param79
// ==========================================
int CheckTime(TTime T) {
    if (T.Hour < 0 || T.Hour > 23 || T.Min < 0 || T.Min > 59 || T.Sec < 0 || T.Sec > 59) {
        return 1; // Час неправильний
    }
    return 0; // Час правильний
}

TTime AddSec(TTime T, int N) {
    // Якщо час неправильний, повертаємо без змін
    if (CheckTime(T) != 0) return T;

    // Переводимо час у загальну кількість секунд
    long long totalSeconds = T.Hour * 3600 + T.Min * 60 + T.Sec;
    totalSeconds += N;

    // Обробка переходу через добу (якщо N дуже велике або від'ємне)
    totalSeconds = totalSeconds % 86400;
    if (totalSeconds < 0) totalSeconds += 86400;

    TTime res;
    res.Hour = totalSeconds / 3600;
    res.Min = (totalSeconds % 3600) / 60;
    res.Sec = totalSeconds % 60;
    
    return res;
}

void runTask1_Param79() {
    cout << "\n=== Завдання 1 (Param79) ===\n";
    
    // П'ять заданих моментів часу
    vector<TTime> times = {
        {10, 30, 45},
        {23, 59, 50},
        {0, 0, 0},
        {12, 15, 0},
        {25, 0, 0} // Навмисно неправильний час
    };
    
    int N;
    cout << "Введіть кількість секунд для додавання (N): ";
    cin >> N;

    for (int i = 0; i < times.size(); i++) {
        cout << "Початковий час: " << times[i].Hour << ":" << times[i].Min << ":" << times[i].Sec;
        TTime newTime = AddSec(times[i], N);
        cout << " | Новий час: " << newTime.Hour << ":" << newTime.Min << ":" << newTime.Sec << "\n";
    }
}

// ==========================================
// ЗАВДАННЯ 2: Begin15
// ==========================================
void processCircle(CircleTask* c) {
    const double PI = 3.14;
    // Знаходимо діаметр з площі
    c->D = sqrt((4 * c->S) / PI);
    // Знаходимо довжину кола
    c->L = PI * c->D;
}

void runTask2_Begin15() {
    cout << "\n=== Завдання 2 (Begin15) ===\n";
    CircleTask task;
    
    cout << "Введіть площу кола S: ";
    cin >> task.S;

    if (task.S < 0) {
        cout << "Площа не може бути від'ємною!\n";
        return;
    }

    processCircle(&task);

    cout << "Діаметр D = " << task.D << "\n";
    cout << "Довжина кола L = " << task.L << "\n";
}

// ==========================================
// ЗАВДАННЯ 2: Boolean32
// ==========================================
void processTriangle(TriangleTask* t) {
    // Перевірка теореми Піфагора для визначення прямокутного трикутника
    long long a2 = t->a * t->a;
    long long b2 = t->b * t->b;
    long long c2 = t->c * t->c;
    
    t->isRight = (a2 + b2 == c2) || (a2 + c2 == b2) || (b2 + c2 == a2);
}

void runTask2_Boolean32() {
    cout << "\n=== Завдання 2 (Boolean32) ===\n";
    TriangleTask task;
    
    cout << "Введіть сторони трикутника a, b, c (через пробіл): ";
    cin >> task.a >> task.b >> task.c;

    processTriangle(&task);

    cout << "Результат (1 - Істина, 0 - Хибність): " << task.isRight << "\n";
    if (task.isRight) {
        cout << "Відповідь: Так, трикутник є прямокутним.\n";
    } else {
        cout << "Відповідь: Ні, трикутник не є прямокутним.\n";
    }
}