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

    cout << "�������� " << ": x = " << mid << endl;

    // ������� ���������
    if (abs(b - a) < e)
        return mid;

    // ���������, � ����� ���������� ����� ������
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

    cout << "������ ���������: x = " << x << endl;

    return 0;
}
