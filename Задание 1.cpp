#include <iostream>
using namespace std;
int main()
{
    int X, Y, Z;

    cout << "Введите X: ";
    cin >> X;
    cout << "Введите Y: ";
    cin >> Y;
    cout << "Введите Z: ";
    cin >> Z;

    cout << "каждое из чисел X и Y нечетное: " << endl;
    if (X % 2 != 0 && Y % 2 != 0) {
        cout << "Condition is true" << endl;
    } else{cout << "Condition is false" << endl;}

    cout << "только одно из чисел X и Y меньше 20:" << endl;
    if ((X < 20 && Y >= 20) || (Y < 20 && X >= 20)) {
        cout << "Condition is true" << endl;
    } else{cout << "Condition is false" << endl;}

    cout << "хотя бы одно из чисел X и Y равно нулю:" << endl;
    if (X == 0 || Y == 0) {
        cout << "Condition is true" << endl;
    } else{cout << "Condition is false" << endl;}

    cout << "каждое из чисел X, Y, Z отрицательное:" << endl;
    if (X < 0 && Y < 0 && Z < 0) {
        cout << "Condition is true" << endl;
    } else{cout << "Condition is false" << endl;}

    cout << "только одно из чисел X, Y и Z кратно пяти:" << endl;
    if ((X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0) || (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0)) {
        cout << "Condition is true" << endl;
    } else{cout << "Condition is false" << endl;}

    cout << "хотя бы одно из чисел X, Y, Z больше 100:" << endl;
    if (X > 100 || Y > 100 || Z > 100) {
        cout << "Condition is true" << endl;
    } else{cout << "Condition is false" << endl;}

    return 0;

}

