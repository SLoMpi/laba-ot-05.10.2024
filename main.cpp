#include <iostream>

int main()
{
    while (true) {
        int dey, a, b;
        long long product;
        std::cout << "Выберите фигуру для проверки:\n"
                  << "1. произведение всех целых чисел от 8 до 15\n"
                  << "2. произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры; 1 < a < 20)\n"
                  << "3. произведение всех целых чисел от 1 до b (значение b вводится с клавиатуры; 1 < b < 20)\n"
                  << "4. произведение всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a)\n"
                  << "0. Выход\n";
        std::cin >> dey;

        if (dey == 0) break;

        switch (dey) {
            case 1:
                std::cout << 8 * 9 * 10 * 11 * 12 * 13 * 14 * 15 << std::endl;
                break;

            case 2: {
                std::cout << "Введите значение a (1 < a < 20): ";
                std::cin >> a;
                if (a <= 1 || a >= 20) {
                    std::cout << "Ошибка: значение a должно быть в пределах от 2 до 19!\n";
                    break;
                }

                product = 1;
                for (int i = a; i <= 20; ++i) {
                    product *= i;
                }
                std::cout << "Произведение чисел от " << a << " до 20: " << product << std::endl;
                break;
            }

            case 3: {
                std::cout << "Введите значение b (1 < b < 20): ";
                std::cin >> b;
                if (b <= 1 || b >= 20) {
                    std::cout << "Ошибка: значение b должно быть в пределах от 2 до 19!\n";
                    break;
                }

                product = 1;
                for (int i = 1; i <= b; ++i) {
                    product *= i;
                }
                std::cout << "Произведение чисел от 1 до " << b << ": " << product << std::endl;
                break;
            }

            case 4: {
                std::cout << "Введите значения a и b (b >= a): ";
                std::cin >> a >> b;

                if (a > b) {
                    std::cout << "Ошибка: b должно быть больше или равно a!\n";
                    break;
                }

                product = 1;
                for (int i = a; i <= b; ++i) {
                    product *= i;
                }
                std::cout << "Произведение чисел от " << a << " до " << b << ": " << product << std::endl;
                break;
            }

            default:
                std::cout << "Неверный выбор! Попробуйте снова.\n";
                break;
        }
    }

    return 0;
}