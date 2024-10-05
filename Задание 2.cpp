#include <iostream>
#include <cmath>

int main() {
    using coord = int;
    std::pair<coord, coord> positionA, positionB;
    int Figura;

    while (true) {
        std::cout << "Выберите фигуру для проверки:\n"
                  << "1. Ладья\n"
                  << "2. Слон\n"
                  << "3. Король\n"
                  << "4. Ферзь\n"
                  << "5. Белая пешка\n"
                  << "6. Черная пешка\n"
                  << "0. Выход\n";
        std::cin >> Figura;

        if (Figura == 0) break;

        std::cout << "Координаты А: ";
        std::cin >> positionA.first >> positionA.second;
        std::cout << "Координаты B: ";
        std::cin >> positionB.first >> positionB.second;

        if (positionA.first <= 1 || positionA.first >= 8 || positionA.second <= 1 || positionA.second >= 8 || positionB.first <= 1 || positionB.first >= 8 || positionB.second <= 1 || positionB.second >= 8) {
            std::cout << "Неверные координаты! Введите координаты от 1 до 8.\n";
            continue;
        }

        switch (Figura) {
            case 1: // Ладья
                if (positionA.first == positionB.first || positionA.second == positionB.second) {
                    std::cout << "Ладья угрожает\n";
                } else {
                    std::cout << "Ладья не угрожает\n";
                }
                break;

            case 2: // Слон
                if (std::abs(positionA.first - positionB.first) == std::abs(positionA.second - positionB.second)) {
                    std::cout << "Слон угрожает\n";
                } else {
                    std::cout << "Слон не угрожает\n";
                }
                break;

            case 3: // Король
                if (std::abs(positionA.first - positionB.first) <= 1 && std::abs(positionA.second - positionB.second) <= 1) {
                    std::cout << "Король может попасть на поле\n";
                } else {
                    std::cout << "Король не может попасть на поле\n";
                }
                break;

            case 4: // Ферзь (комбинация ладьи и слона)
                if (positionA.first == positionB.first || positionA.second == positionB.second ||
                    std::abs(positionA.first - positionB.first) == std::abs(positionA.second - positionB.second)) {
                    std::cout << "Ферзь угрожает\n";
                } else {
                    std::cout << "Ферзь не угрожает\n";
                }
                break;

            case 5: // Белая пешка
                if (positionA.first == positionB.first && positionA.second + 1 == positionB.second) {
                    std::cout << "Белая пешка может сделать обычный ход\n";
                } else if (std::abs(positionA.first - positionB.first) == 1 && positionA.second + 1 == positionB.second) {
                    std::cout << "Белая пешка может бить фигуру\n";
                } else {
                    std::cout << "Белая пешка не может сделать ход\n";
                }
                break;

            case 6: // Черная пешка
                if (positionA.first == positionB.first && positionA.second - 1 == positionB.second) {
                    std::cout << "Черная пешка может сделать обычный ход\n";
                } else if (std::abs(positionA.first - positionB.first) == 1 && positionA.second - 1 == positionB.second) {
                    std::cout << "Черная пешка может бить фигуру\n";
                } else {
                    std::cout << "Черная пешка не может сделать ход\n";
                }
                break;

            default:
                std::cout << "Неверный выбор фигуры\n";
                break;
        }
    }

    return 0;
}
