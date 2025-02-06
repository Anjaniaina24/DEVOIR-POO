#include "ComplexeFraction.h"

using namespace isa;

int main(int argc, char* argv[])
{

    ComplexeFraction cf1;
    ComplexeFraction cf2;
    ComplexeFraction cf3;

    Fraction f1;
    Fraction f2;
    Fraction f3;
    Fraction f4;
    Fraction f5;
    Fraction f6;

    f1.setNumerator(1);
    f1.setDenominator(2);
    f2.setNumerator(3);
    f2.setDenominator(4);
    f3.setNumerator(5);
    f3.setDenominator(6);
    f4.setNumerator(7);
    f4.setDenominator(8);

    cf1.setReel(f1);
    cf1.setImaginaire(f2);
    cf2.setReel(f3);
    cf2.setImaginaire(f4);

    cf3 = cf1.addCompFrac(cf2);
    cf1.afficher();
    std::cout << " + ";
    cf2.afficher();
    std::cout << " = ";
    cf3.afficher();
    std::cout << std::endl;

    cf3 = cf1.subCompFrac(cf2);
    cf1.afficher();
    std::cout << " - ";
    cf2.afficher();
    std::cout << " = ";
    cf3.afficher();
    std::cout << std::endl;

    cf3 = cf1.multCompFrac(cf2);
    cf1.afficher();
    std::cout << " * ";
    cf2.afficher();
    std::cout << " = ";
    cf3.afficher();
    std::cout << std::endl;

    return  0;
}