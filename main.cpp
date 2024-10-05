#include <iostream>

int main()
{
    while (true) {
        int a=0;
        int n;
        const int N=10;
        int dey;
        std::cout << "Выберите фигуру для проверки:\n"
                  << "1. Калькулятор\n"
                  << "0. Выход\n";
        std::cin >> dey;
        switch (dey) {
            case 1:

                std::cout << "Введите значени N:"<<std::endl;
                std::cin >> n;
                while (++a<N) {
                    std::cout << a<<" * "<<n<<" = " << a*n << std::endl;
                }
                break;
            case 0:
                return 0;
                break;
        }
    }
    return 0;

}