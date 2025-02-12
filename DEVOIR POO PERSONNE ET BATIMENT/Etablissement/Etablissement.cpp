#include "Etablissement.h"

using namespace batiment;
using namespace peuple;

Etablissement::Etablissement() {}

Etablissement::Etablissement(std::string a, Personne p, std::string n) : Infrastructure(a, p) , nom(n) {}

Etablissement::~Etablissement() {}

void Etablissement::setNom(std::string n)
{
    nom = n;
}

std::string Etablissement::getNom() const
{
    return nom;
}

void Etablissement::display()
{
    Infrastructure::display();
    std::cout << "Nom de l'établissement : " << nom << std::endl;
}
