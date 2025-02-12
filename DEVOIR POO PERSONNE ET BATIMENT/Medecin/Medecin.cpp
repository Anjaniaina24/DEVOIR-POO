#include "Medecin.h"

using namespace peuple;

Medecin::Medecin() {}

Medecin::Medecin(std::string n, int a, std::string s) : Personne(n, a)
{
    setSpecialite(s);
}

Medecin::~Medecin() {}

void Medecin::setSpecialite(std::string s)
{
    specialite = s;
}

std::string Medecin::getSpecialite() const
{
    return specialite;
}

void Medecin::display()
{
    Personne::display();
    std::cout << "Spécialité : " << specialite << std::endl;
}