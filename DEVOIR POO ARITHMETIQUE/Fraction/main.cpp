#include "Fraction.h"

using namespace isa;

int main(int argc, char *argv[])
{

    Fraction f1;
    Fraction f2;
    Fraction f3;

    f1.setNumerator(3);
    f1.setDenominator(4);

    f2.setNumerator(1);
    f2.setDenominator(2);

    f3 = f1.addFrac(f2);

    f1.afficher();
    std::cout << " + ";
    f2.afficher();
    std::cout << " = ";
    f3.afficher();
    std::cout << std::endl;
    
    f3 = f1.subFrac(f2);
    f1.afficher();
    std::cout << " - ";
    f2.afficher();
    std::cout << " = ";
    f3.afficher();
    std::cout << std::endl;

    f3 = f1.multFrac(f2);
    f1.afficher();
    std::cout << " * ";
    f2.afficher();
    std::cout << " = ";
    f3.afficher();
    std::cout << std::endl;

    f3 = f1.divFrac(f2);
    f1.afficher();
    std::cout << " / ";
    f2.afficher();
    std::cout << " = ";
    f3.afficher();
    std::cout << std::endl;

    return 0;
}