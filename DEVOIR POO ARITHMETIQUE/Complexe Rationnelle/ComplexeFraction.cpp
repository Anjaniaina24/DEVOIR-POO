#include "ComplexeFraction.h"

using namespace isa;

ComplexeFraction::ComplexeFraction() 
{

}

ComplexeFraction::~ComplexeFraction()
{

}

void ComplexeFraction::setReel(const Fraction &f)
{
    reel = f;
}

void ComplexeFraction::setImaginaire(const Fraction &f)
{
    imaginaire = f;
}

Fraction ComplexeFraction::getReel() const
{
    return reel;
}

Fraction ComplexeFraction::getImaginaire() const
{
    return imaginaire;
}

ComplexeFraction ComplexeFraction::addCompFrac(ComplexeFraction &cf)
{
    Fraction reelSum = reel.addFrac(cf.reel);
    Fraction imaginaireSum = imaginaire.addFrac(cf.imaginaire);

    ComplexeFraction resultat;
    resultat.setReel(reelSum);
    resultat.setImaginaire(imaginaireSum);

    return resultat;
}

ComplexeFraction ComplexeFraction::subCompFrac(ComplexeFraction &cf)
{
    Fraction reelDiff = reel.subFrac(cf.reel);
    Fraction imaginaireDiff = imaginaire.subFrac(cf.imaginaire);

    ComplexeFraction resultat;
    resultat.setReel(reelDiff);
    resultat.setImaginaire(imaginaireDiff);
    return resultat;
}

ComplexeFraction ComplexeFraction::multCompFrac(ComplexeFraction &cf)
{
    Fraction reelProduit = (reel.multFrac(cf.reel)).subFrac(imaginaire.multFrac(cf.imaginaire));
    Fraction imaginaireProduit = (reel.multFrac(cf.imaginaire)).addFrac(imaginaire.multFrac(cf.reel));
    
    ComplexeFraction resultat;
    resultat.setReel(reelProduit);
    resultat.setImaginaire(imaginaireProduit);

    return resultat;
}

void ComplexeFraction::afficher()
{
    std::cout << '(';
    reel.afficher();
    std::cout << " + ";
    imaginaire.afficher();
    std::cout << "i)";
}