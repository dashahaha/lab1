#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <QString>
#include <complex.h>

#define DEGTORAD(v) (v * M_PI / 180.0f)
#define RADTODEG(v) (v * 180.0f / M_PI)


class ComplexNumber
{
public:
    //complexnumber();

    void seta(int n);
    void setb(int n);

    int geta();
    int getb();

    void showEulersFormula();

private:

    double b, a;

};

#endif // COMPLEXNUMBER_H
