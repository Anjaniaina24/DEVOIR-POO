#include <iostream>

namespace isa
{
    class Complexe
    {
    
        private:
            float reel;
            float imaginaire;
            
        public:
            Complexe();
            ~Complexe();
            void setReel(float(n));
            float getReel() const;
            void setImaginaire(float(n));
            float getImaginaire() const;
            Complexe addComp(const Complexe &c) const;
            Complexe subComp(const Complexe &c) const;
            Complexe multComp(const Complexe &c) const;
            void afficher();
    };
}