#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

double f(double x) 
{
    return 3 * x - 4 * log(x) - 5;
}

int main() 
{
    setlocale(LC_ALL, "ru");

    double a = 2.0, b = 4.0;
    double e = 0.0001; 
    double mid = 0; 
 
    int i = 1;
    while (abs(b - a) >= e) 
    {
        mid = (a + b) / 2; 
        i++;
        cout << "Итерация " << i << " " << mid << endl;

       if (f(a) * f(mid) < 0) 
       {
            b = mid; 
       }
       else 
       {
            a = mid; 
       }
    }
    cout << "Корень уравнения: x = " << mid << endl;
    return 0;
}
