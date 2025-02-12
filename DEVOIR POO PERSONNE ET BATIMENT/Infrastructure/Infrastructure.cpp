#include "Infrastructure.h"

using namespace batiment;
using namespace peuple;

Infrastructure::Infrastructure() : adresse(""), proprietaire() {}

Infrastructure::Infrastructure(std::string a, Personne p) : adresse(a), proprietaire(p) {}

Infrastructure::~Infrastructure() {}

void Infrastructure::setAdresse(std::string a)
{
    adresse = a;
}

std::string Infrastructure::getAdresse() const
{
    return adresse;
}

void Infrastructure::setProprietaire(Personne p)
{
    proprietaire = p;
}

Personne Infrastructure::getProprietaire() const
{
    return proprietaire;
}

void Infrastructure::display()
{
    std::cout << "Proprietaire : " << std::endl;
    proprietaire.display();
    std::cout << "Adresse : " << adresse << std::endl;
}