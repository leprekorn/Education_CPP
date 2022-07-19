#include <iostream>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "Russian");
    float fahr, cels;
    std::cout << endl << " Введите температуру по Фаренгейту" << endl;
    std::cin >> fahr;
    cels = 5 / 9 * (fahr - 32);
    std::cout << " По Фаренгейту: " << fahr << " в градусах Цельсия: " << cels << endl;
    return 0;
}


