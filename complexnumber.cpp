#include "complexnumber.h"
#include <math.h>
#include <iostream>
#include <QDebug>


//complexnumber::complexnumber()
//{

//}

void ComplexNumber::seta(int n)
{
    a = n;
}

void ComplexNumber::setb(int n)
{
    b = n;
}

int ComplexNumber::geta()
{
    return a;
}

int ComplexNumber::getb()
{
    return b;
}

void ComplexNumber::showEulersFormula()
{
    double modulus = std::sqrt(pow(a,2) + pow(b,2));


    double angle;

    if (a > 0)
    {
        angle = std::atan(b/a); // в радианах

    }
    else
    {
        angle = std::atan(b/a) + 180;
    }

    //std::complex<double> polar = std::polar(modulus, RADTODEG(angle));
    //qDebug() << polar;

    std::cout <<"Euler\'s formula of "<< a << " + " << b <<"i is "
              << modulus << "e ^ i" << RADTODEG(angle);

}
