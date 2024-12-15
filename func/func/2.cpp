#include <iostream>
#include <clocale>
#include <cmath> 

using namespace std;


double f(double x)
{
	return 3 * x - 4 * log(x) - 5;
}
double fit(double x)
{
	return (4 * log(x) + 5) / 3;
}
double fit2(double x)
{
    return 4 / (3 * x);
}

int main()
{
	setlocale(LC_ALL, "ru");

	double a = 2.0, b = 4.0;
	double e = 0.0001;
    double x0, x1;

    if (fit2(a) < 1)
    {
        x0 = a;
    }
    else
    {
        x0 = b;
    }

    int i = 1;

    do
    {
        x1 = fit(x0); 
        cout << "Итерация " << ++i << ": x = " << x1 << endl;

        
        if (abs(x1 - x0) < e)
            break;

        x0 = x1; 
    } while (true);

    cout << "Корень уравнения: x = " << x1 << endl;
}