#include "Arithm.h"

using namespace isa;

ComplexeFraction addition(ComplexeFraction a, int b) 
{
    ComplexeFraction resultat;
    Fraction f1;
    f1.setNumerator(b);
    f1.setDenominator(1);
    resultat.setReel(f1.addFrac(a.getReel()));
    resultat.setImaginaire(a.getImaginaire());
    return resultat;
}

ComplexeFraction addition(ComplexeFraction a, Fraction b)
{
    ComplexeFraction resultat;
    resultat.setReel(a.getReel().addFrac(b));
    resultat.setImaginaire(a.getImaginaire());
    return resultat;
}

ComplexeFraction addition(int a, Fraction b)
{
    ComplexeFraction resultat;
    Fraction f1;
    Fraction f2;
    f1.setNumerator(a);
    f1.setDenominator(1);
    f2.setNumerator(0);
    f2.setDenominator(1); 
    resultat.setReel(f1.addFrac(b));
    resultat.setImaginaire(f2);
    return resultat;
}