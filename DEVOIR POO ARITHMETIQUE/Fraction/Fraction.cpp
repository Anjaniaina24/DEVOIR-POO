#include "Fraction.h"

using namespace isa;

Fraction::Fraction()
{

}

Fraction::~Fraction()
{

}

void Fraction::setNumerator(int num)
{
    numerator = num;
}

void Fraction::setDenominator(int den)
{
    denominator = den;
}

int Fraction::getNumerator() const
{
    return numerator;
}

int Fraction::getDenominator() const
{
    return denominator;
}

Fraction Fraction::addFrac(Fraction f)
{
    Fraction result;
    result.numerator = (numerator * f.denominator) + (denominator * f.numerator);
    result.denominator = denominator * f.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::subFrac(Fraction f)
{
    Fraction result;
    result.numerator = (numerator * f.denominator) - (denominator * f.numerator);
    result.denominator = denominator * f.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::multFrac(Fraction f)
{
    Fraction result;
    result.numerator = numerator * f.numerator;
    result.denominator = denominator * f.denominator;
    result.simplify();
    return result;
}

Fraction Fraction::divFrac(Fraction f)
{
    Fraction result;
    result.numerator = numerator * f.denominator;
    result.denominator = denominator * f.numerator;
    result.simplify();
    return result;  
}

void Fraction::simplify()
{
    int a = numerator;
    int b = denominator;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    if(a < 0)
        a = -a;
    numerator /= a;
    denominator /= a;
}

void Fraction::afficher()
{
    if(denominator == 1)
        std::cout << numerator;
    else
        std::cout << numerator << "/" << denominator;
}
