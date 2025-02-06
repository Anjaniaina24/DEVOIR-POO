#include "Arithm.h"

using namespace isa;

int main(int argc, char *argv[])
{

    ComplexeFraction a;
    Fraction f1;
    Fraction f2;
    f1.setNumerator(2);
    f1.setDenominator(3);
    f2.setNumerator(1);
    f2.setDenominator(4);
    a.setReel(f1);
    a.setImaginaire(f2);

    ComplexeFraction resultat = addition(a, 3);
    a.afficher();
    std::cout << " + " << 3 << " = ";
    resultat.afficher();
    std::cout << std::endl;

    Fraction f3;
    f3.setNumerator(7);
    f3.setDenominator(5);
    resultat = addition(a, f3);
    a.afficher();
    std::cout << " + "; 
    f3.afficher();
    std::cout << " = ";
    resultat.afficher();
    std::cout << std::endl;

    resultat = addition(3, f2);
    std::cout << 3 << " + ";
    f2.afficher();
    std::cout << " = ";
    resultat.afficher();
    std::cout << std::endl;

    return 0;
}