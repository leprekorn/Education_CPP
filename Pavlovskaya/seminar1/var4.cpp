#include <iostream>
#include <cmath>

constexpr auto PI = 3.14159265;

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, z1, z2 = 0.0;
    std::cout << endl << " Введите значение a (угол в градусах" << endl;
    std::cin >> a;
    std::cout << endl << " Вы ввели: " << a << endl;
    double radian = a * PI / 180;
    std::cout << endl << " В радианах: " << radian << endl;
    z1 = (sin(2 * radian) + sin(5 * radian) - sin(3 * radian)) / (cos(radian) - cos(3 * radian) + cos(5 * radian));
    z2 = tan(3 * radian);

    std::cout << " По первой формуле: " << z1 << endl << " По второй формуле: " << z2 << endl;
    return 0;
}
