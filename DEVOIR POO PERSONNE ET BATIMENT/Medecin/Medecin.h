#ifndef MEDECIN_H
#define MEDECIN_H

#include "../Personne/Personne.h"

namespace peuple
{
    class Medecin : public Personne
    {

        private:
            std::string specialite;

        public:
            Medecin();
            Medecin(std::string n, int a, std::string s);
            ~Medecin();
            void setSpecialite(std::string s);
            std::string getSpecialite() const;
            void display();

    };
}

#endif