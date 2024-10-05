#include <iostream>
using namespace std;
int main()
{

    int X, Y, Z, Usl;
    while (true) {
        std::cout << "Выберите фигуру для проверки:\n"
                  << "1. Каждое из чисел X и Y нечетное\n"
                  << "2. Только одно из чисел X и Y меньше 20\n"
                  << "3. Хотя бы одно из чисел X и Y равно нулю\n"
                  << "4. Каждое из чисел X, Y, Z отрицательное\n"
                  << "5. Только одно из чисел X, Y и Z кратно пяти\n"
                  << "6. Хотя бы одно из чисел X, Y, Z больше 100\n"
                  << "0. Выход\n";
        std::cin >> Usl;
        if (Usl == 0) break;
        cout << "Введите X Y Z: ";
        cin >> X;
        cin >> Y;
        cin >> Z;
        switch (Usl) {
            case 1:
                cout << "каждое из чисел X и Y нечетное: " << endl;
                if (X % 2 != 0 && Y % 2 != 0) {
                    cout << "Condition is true" << endl;
                } else{cout << "Condition is false" << endl;}
            break;
            case 2:
                cout << "только одно из чисел X и Y меньше 20:" << endl;
                if ((X < 20 && Y >= 20) || (Y < 20 && X >= 20)) {
                    cout << "Condition is true" << endl;
                } else{cout << "Condition is false" << endl;}
            break;
            case 3:
                cout << "хотя бы одно из чисел X и Y равно нулю:" << endl;
                if (X == 0 || Y == 0) {
                    cout << "Condition is true" << endl;
                } else{cout << "Condition is false" << endl;}
            break;
            case 4:
                cout << "каждое из чисел X, Y, Z отрицательное:" << endl;
                if (X < 0 && Y < 0 && Z < 0) {
                    cout << "Condition is true" << endl;
                } else{cout << "Condition is false" << endl;}
            break;
            case 5:
                cout << "только одно из чисел X, Y и Z кратно пяти:" << endl;
                if ((X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0)) {
                    cout << "Condition is true" << endl;
                } else{cout << "Condition is false" << endl;}
            break;
            case 6:
                cout << "хотя бы одно из чисел X, Y, Z больше 100:" << endl;
                if (X > 100 || Y > 100 || Z > 100) {
                    cout << "Condition is true" << endl;
                } else{cout << "Condition is false" << endl;}
            break;
        }
    }
    return 0;

}
