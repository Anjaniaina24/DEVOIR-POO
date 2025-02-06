#include "Complexe.h"

using namespace isa;

int main(int argc, char* argv[])
{

    Complexe c1;
    Complexe c2;
    Complexe c3;

    c1.setReel(3.0);
    c1.setImaginaire(4.0);

    c2.setReel(5.0);
    c2.setImaginaire(6.0);

    c3 = c1.addComp(c2);
    c1.afficher();
    std::cout << " + ";
    c2.afficher();
    std::cout << " = ";
    c3.afficher();
    std::cout << std::endl;

    c3 = c1.subComp(c2);
    c1.afficher();
    std::cout << " - ";
    c2.afficher();
    std::cout << " = ";
    c3.afficher();
    std::cout << std::endl;

    c3 = c1.multComp(c2);
    c1.afficher();
    std::cout << " * ";
    c2.afficher();
    std::cout << " = ";
    c3.afficher();
    std::cout << std::endl;

    return 0;
}