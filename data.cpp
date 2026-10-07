#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a = 17;
    double b = 3.14;

    cout << "-----арифметичні операції------" << endl;

    int resultInt = a / b;
    double resultDouble = a / b;

    cout << "-----операція +-----" << endl;
    int sumInt = a + b;
    double sumDouble = a + b;

    cout << "sumInt: " << sumInt << endl;
    cout << "sumDouble: " << sumDouble << endl;
    if (sumInt == sumDouble) {
        cout << "Співпадають" << endl;
    }else{
        cout << "Не співпадають" << endl;
    }

    cout << "-----операція *-----" << endl;
    int multiInt = a * b;
    double multiDouble = a * b;

    cout << "multiInt: " << multiInt << endl;
    cout << "multiDouble: " << multiDouble << endl;
    if (multiInt == multiDouble) {
        cout << "Співпадають" << endl;
    }else{
        cout << "Не співпадають" << endl;
    }

    cout << "-----операція /-----" << endl;
    int divInt = a / b;
    double divDouble = a / b;

    cout << "divInt" << divInt << endl;
    cout <<"divDouble"<< divDouble << endl;
    if (divInt == divDouble) {
        cout << "Співпадають" << endl;
    }else{
        cout << "Не співпадають" << endl;
    }

    cout << "-----операція *= -----" << endl;
    int copyInt = a *= b;
    double copyDouble = a *= b;

    cout << "copyInt" << copyInt << endl;
    cout <<"copyDouble"<< copyDouble << endl;
    if (copyInt == copyDouble) {
        cout << "Співпадають" << endl;
    }else{
        cout << "Не співпадають" << endl;
    }


    cout << "-----Перетворення типів------" << endl;
    //неявне перетворення
    double implicitDouble = a;
    int implicitInt = b;

    cout << "-----неявне перетворення------" << endl;
    cout << "implicitDouble: " << implicitDouble << endl;
    cout << "implicitInt: " << implicitInt << endl;


    //явне перетворення
    double d = 3.14;
    int explicitInt = static_cast<int>(b);

    int e = 17;
    int c = 4;
    double division = static_cast<double>(a) / c;

    cout << "-----явне перетворення------" << endl;
    cout << "explicitInt: " << explicitInt << endl;
    cout << "division: " << division << endl;

    cout << "-----Порівння типів------" << endl;
    cout << boolalpha << endl;// вмикає значення true/false замість 0/1

    cout << "a == b : " << (a == b ) << endl;
    cout << "a == b : " << (a != b ) << endl;

    cout << "----- Перевірка на обрізання------" << endl;
    if (b != trunc(b)) {
        cout << "Відбулось обрізання" << endl;
    } else {
        cout << "Не відбулось обрізання" << endl;
    }
    int b_cust = static_cast<int>(b);
    int result = a + b_cust;
    cout << "result: " << result << " (взято лише " << b_cust << ")\n";

    cout << "----- Кількість байтів------" << endl;

    cout << "Розмір int a:" << sizeof(a) << " байт"<< endl;
    cout << "Розмір double b:" << sizeof(b) << " байт"<< endl;

    cout << "----- Виведення адрес змінних у пам'яті------" << endl;
    cout << "Адреса змінної a : " << &a << endl;
    cout << "Адреса змінної b : " << &b << endl;
}