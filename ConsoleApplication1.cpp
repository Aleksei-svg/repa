#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double t, S, n, Hg, L, d;
    cout << "Введите время работы насоса: ";
    cin >> t;
    cout << "Введите площадь огорода: ";
    cin >> S;
    cout << "Введите количество людей на участке: ";
    cin >> n;
    cout << "Введите геодезическую высоту: ";
    cin >> Hg;
    cout << "Введите длину трубы водопровода: ";
    cin >> L;
    cout << "Введите диаметр трубы водопровода: ";
    cin >> d;
    const double m = 0.001;
    double w = 0.02 * S + 0.05 * n;
    double Q = w / t;
    double Re = d / m;
    double I;

if (Re < 2300)
{
    I = 64.0 / Re;
}
else
{
    I = 0.3 / pow(Re, 0.25);
}
double h = I * (L / (d * 19.6));
double H = Hg + h + 5;
cout << "\nРезультаты расчётов: " << endl;
cout << "Подача насосааа (Q) = " << Q << " л/час " << endl;
cout << "Требуемый напор (H)" << H << " м " << endl;
return 0;
}
