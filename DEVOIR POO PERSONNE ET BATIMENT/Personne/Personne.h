#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>

namespace peuple
{
    class Personne
    {
        private:    
            std::string nom;
            int age;

        public:
            Personne();
            Personne(std::string n, int a = 0);
            ~Personne();
            void setNom(std::string n);
            std::string getNom() const;
            void setAge(int a);
            int getAge() const;
            void display();

    };
}

#endif