#include <iostream>
#include <cmath>

constexpr auto PI = 3.14159265;

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, z1, z2 = 0.0;
    std::cout << endl << " ������� �������� a (���� � ��������" << endl;
    std::cin >> a;
    std::cout << endl << " �� �����: " << a << endl;
    double radian = a * PI / 180;
    std::cout << endl << " � ��������: " << radian << endl;
    z1 = (sin(2 * radian) + sin(5 * radian) - sin(3 * radian)) / (cos(radian) - cos(3 * radian) + cos(5 * radian));
    z2 = tan(3 * radian);

    std::cout << " �� ������ �������: " << z1 << endl << " �� ������ �������: " << z2 << endl;
    return 0;
}
