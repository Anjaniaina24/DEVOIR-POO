#include <iostream>

namespace isa
{
    
    class Fraction
    {

        public:
            Fraction();
            ~Fraction();
            void setNumerator(int num);
            void setDenominator(int den);
            int getNumerator() const;
            int getDenominator() const;
            Fraction addFrac(Fraction f);
            Fraction subFrac(Fraction f);
            Fraction multFrac(Fraction f);
            Fraction divFrac(Fraction f);
            void simplify();
            void afficher();
        

        private:
            int numerator;
            int denominator;
    };

}
