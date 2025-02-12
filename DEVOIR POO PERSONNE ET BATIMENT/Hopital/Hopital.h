#ifndef HOPITAL_H
#define HOPITAL_H

#include "../Infrastructure/Infrastructure.h"

namespace batiment
{
    class Hopital : public Infrastructure
    {
        private:
            std::string nom;

        public:
            Hopital();
            Hopital(std::string a, peuple::Personne p, std::string n);
            ~Hopital();
            void setNom(std::string n);
            std::string getNom() const;
            void display();

    };
}

#endif