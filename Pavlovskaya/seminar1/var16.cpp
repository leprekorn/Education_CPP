#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, z1, z2;
    std::cout << endl << " Введите значение x " << endl;
    std::cin >> x;
    std::cout << endl << " Вы ввели: " << x << endl;
    z1 = pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9);
    z2 = sqrt((x + 3) / (x - 3));

    std::cout << " По первой формуле: " << z1 << endl << " По второй формуле: " << z2 << endl;
    return 0;
}
