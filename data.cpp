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


}