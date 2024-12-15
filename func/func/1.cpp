#include <iostream>
#include <clocale>
#include <cmath> 

using namespace std;


double f(double x)
{
    return 3 * x - 4 * log(x) - 5;
}

double fpr(double x)
{
    return 3 - 4 / x;
}

double fpr2(double x)
{
    return 4 / pow(x, 2);;
}

int main() {

    setlocale(LC_ALL, "ru");

    double a = 2.0, b = 4.0;
    double x0, x1;
    double e = 0.0001;
    double max = 5;


    if (f(a) * fpr2(a) > 0)
    {
        x0 = a;
    }
    else
    {
        x0 = b;
    }

    cout << "x0 = " << x0 << endl;

    for (int i = 1; i < max; ++i)
    {
        x1 = x0 - f(x0) / fpr(x0);

        cout << "Итерация " << i << ": x = " << x1 << endl;

        x0 = x1;
    }

    cout << "Корень уравнения: x = " << x1 << endl;

    return 0;
}