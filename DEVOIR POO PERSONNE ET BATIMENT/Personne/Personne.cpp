#include "Personne.h"

using namespace peuple;

Personne::Personne() : nom(""), age(0) {}

Personne::Personne(std::string n, int a) : nom(n), age(a) {}

Personne::~Personne() {}

void Personne::setNom(std::string n)
{
    nom = n;
}

std::string Personne::getNom() const
{
    return nom;
}

void Personne::setAge(int a)
{
    if(a >= 0)
        age = a;
}

int Personne::getAge() const
{
    return age;
}

void Personne::display()
{
    std::cout << "Nom : " << nom << std::endl << "Age : " << age << std::endl;
}