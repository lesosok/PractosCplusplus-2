#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    char operation;
    double a, b;
    int c = 1;

    do {
        cout << "Какую операцию вы хотите выполнить:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Деление\n";
        cout << "4. Умножение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Нахождение факториала числа\n";
        cout << "9. Выйти из программы\n";
        cin >> operation;

        switch (operation) {
        case '1':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат сложения: " << a + b << "\n\n";
            break;
        case '2':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат вычитания: " << a - b << "\n\n";
            break;
        case '3':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (a == 0 || b == 0) {
                cout << "Ошибка! Деление на ноль невозможно\n\n";
            }
            else {
                cout << "Результат деления: " << a / b << "\n\n";
            }
            break;
        case '4':
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат умножения: " << a * b << "\n\n";
            break;
        case '5':
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень: ";
            cin >> b;
            cout << "Результат возведения в степень: " << pow(a, b) << "\n\n";
            break;
        case '6':
            cout << "Введите число: ";
            cin >> a;
            cout << "Результат: " << sqrt(a) << "\n\n";
            break;
        case '7':
            cout << "Введите число: ";
            cin >> a;
            cout << "Результат: " << a / 100 << "\n\n";
            break;
        case '8':
            cout << "Введите число: ";
            cin >> a;
            for (int i = 1; i <= a; i++) {
                c = c * i;
            }
            cout << "Результат: " << c << "\n\n";
            break;
        case '9':
            cout << "Досвидания!";
            break;
        default:
            cout << "Неверная операция! Повторите попытку\n\n";
            break;
        }
    } while (operation != '9');
}