#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H

#include <string>
#include "../Personne/Personne.h"

namespace batiment
{
    class Infrastructure
    {
        private:
            std::string adresse;
            peuple::Personne proprietaire;

        public:
            Infrastructure();
            Infrastructure(std::string a, peuple::Personne p);
            ~Infrastructure();
            void setAdresse(std::string a);
            std::string getAdresse() const;
            void setProprietaire(peuple::Personne p);
            peuple::Personne getProprietaire() const;
            void display();

    };
}

#endif