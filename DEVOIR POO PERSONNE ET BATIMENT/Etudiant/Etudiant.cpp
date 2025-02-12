#include "Etudiant.h"

using namespace peuple;

Etudiant::Etudiant() {}

Etudiant::Etudiant(std::string n, int a, /*Etablissement e, */std::string m) : Personne(n, a)
{
    //setEtablissement(e);
    mention = m;
}

Etudiant::~Etudiant() {}

/*void Etudiant::setEtablissement(Etablissement e)
{
    etablissement = e;
}

Etablissement Etudiant::getEtablissement() const
{
    return etablissement;
}*/

void Etudiant::setMention(std::string m)
{
    mention = m;
}

std::string Etudiant::getMention() const
{
    return mention;
}

void Etudiant::display()
{
    Personne::display();
    std::cout << "Mention : " << mention << std::endl;
}