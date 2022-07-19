#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    double Xn, Xk, dX, a, b, c, y;
    std::cout << "Введите через пробел, без запятой значения: Xn, Xk, dX, a, b, c" << std::endl;
    std::cin >> Xn >> Xk >> dX >> a >> b >> c;
    std::cout << "-------------------------------------------------\n";
    std::cout << "|    X    |    Y    \n";
    for (double x = Xn; x <= Xk; x += dX)
    {
        if (x < 0 && b != 0)  y = a * pow(x, 2) + b;
        if (x > 0 && b == 0) y = (x - a) / (x - c);
        else y = x / c;
        if (((int(a) || int(b)) && (int(a) || int(c))) != 0)
        {
            std::cout << x << "    |    " << y << "\n";
        }
        else std::cout << x << "    |    " << int(y) << "\n";
    }
}   
