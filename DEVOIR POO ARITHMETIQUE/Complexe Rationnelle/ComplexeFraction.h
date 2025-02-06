#include "../Fraction/Fraction.h"

namespace isa
{
    class ComplexeFraction
    {

        private:
            Fraction reel;
            Fraction imaginaire;

        public: 
            ComplexeFraction();
            ~ComplexeFraction();
            void setReel(const Fraction &f);
            void setImaginaire(const Fraction &f);
            Fraction getReel() const;
            Fraction getImaginaire() const;
            ComplexeFraction addCompFrac(ComplexeFraction &cf);
            ComplexeFraction subCompFrac(ComplexeFraction &cf);
            ComplexeFraction multCompFrac(ComplexeFraction &cf);
            void afficher();

    };
}