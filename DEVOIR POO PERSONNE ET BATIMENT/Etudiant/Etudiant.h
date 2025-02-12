#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "../Personne/Personne.h"
//#include "../Etablissement/Etablissement.h"

namespace peuple
{
    class Etudiant : public Personne
    {
        private:
            //Etablissement etablissement;
            std::string mention;

        public:
            Etudiant();
            Etudiant(std::string n, int a, /*Etablissement e, */std::string m);
            ~Etudiant();
            /*void setEtablissement(Etablissement e);
            Etablissement getEtablissement() const;*/
            void setMention(std::string m);
            std::string getMention() const;
            void display();

    };
}

#endif