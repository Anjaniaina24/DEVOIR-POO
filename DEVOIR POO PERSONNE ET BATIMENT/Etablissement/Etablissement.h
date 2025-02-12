#ifndef ETABLISSEMENT_H
#define ETABLISSEMENT_H

#include "../Infrastructure/Infrastructure.h"

namespace batiment
{
    class Etablissement : public Infrastructure
    {

        private:
            std::string nom;

        public:
        Etablissement();
        Etablissement(std::string a, peuple::Personne p, std::string n);
        ~Etablissement();
        void setNom(std::string n);
        std::string getNom() const;
        void display();

    };
}

#endif