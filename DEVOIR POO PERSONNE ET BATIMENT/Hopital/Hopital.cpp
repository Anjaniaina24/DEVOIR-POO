#include "Hopital.h"

using namespace batiment;
using namespace peuple;

Hopital::Hopital() {}

Hopital::Hopital(std::string a, Personne p, std::string n) : Infrastructure(a, p), nom(n) {}

Hopital::~Hopital() {}

void Hopital::setNom(std::string n)
{
    nom = n;
}

std::string Hopital::getNom() const
{
    return nom;
}

void Hopital::display()
{
    Infrastructure::display();
    std::cout << "Nom du hopital : " << nom << std::endl;
}