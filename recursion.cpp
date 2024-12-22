#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

double f(double x)
{
    return 3 * x - 4 * log(x) - 5;
}

double del(double a, double b, double e)
{
    double mid = (a + b) / 2;

    cout << "Итерация " << ": x = " << mid << endl;

    // Условие остановки
    if (abs(b - a) < e)
        return mid;

    // Проверяем, в каком подотрезке лежит корень
    if (f(a) * f(mid) < 0)
        return del(a, mid, e);
    else
        return del(mid, b, e);
}

int main()
{
    setlocale(LC_ALL, "ru");

    double a = 2.0, b = 4.0;
    double e = 0.0001;

    double x = del(a, b, e); 

    cout << "Корень уравнения: x = " << x << endl;

    return 0;
}
