#include <QCoreApplication>
#include "complexnumber.h"
#include "math.h"
#include "iostream"

/*
    Комплексное число (a+jb) в алгебраической форме задано полями a и b с
    помощью метода Polar получить запись комплексного числа в показательной
    форме.
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ComplexNumber complex;

    double i;

    std::cout<<"Input a: ";
    std::cin >> i;
    complex.seta(i);

    std::cout<<"\nInput b: ";
    std::cin >> i;
    complex.setb(i);

    complex.showEulersFormula(); // отображение показательной формы

    return a.exec();
}
