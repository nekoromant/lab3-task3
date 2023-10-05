// //Вариант 1
// Вычеслить значение функции при произвольных x. при a=1.4 b=1.4
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    double a = 1.4;
    double b = 1.4;
    double x;

    cout << "Введите значение x: ";
    cin >> x;

    double y;

    if (x < -2) {
        y = a + 0.5 * exp(-1); // exp(x) -функция экспоненты, которая вычисляет значение e в степени x
    }
    else if (x >= -2 && x <= 5) {
        y = sin(b * b * x);
    }
    else {
        y = sqrt(pow(x, 4) + 2 * a); //sqrt - квадратный корень; pow - первое число в степень равную второму числу
    }

    cout << "Значение функции f(x) при x = " << x << " равно " << y << endl;

    system("pause");
    return 0;
}

