#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, z1, z2;
    std::cout << endl << " ������� �������� x " << endl;
    std::cin >> x;
    std::cout << endl << " �� �����: " << x << endl;
    z1 = pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9);
    z2 = sqrt((x + 3) / (x - 3));

    std::cout << " �� ������ �������: " << z1 << endl << " �� ������ �������: " << z2 << endl;
    return 0;
}
