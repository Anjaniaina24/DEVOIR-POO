#include "Complexe.h"

using namespace isa;

Complexe::Complexe() 
{

}

Complexe::~Complexe()
{

}

void Complexe::setReel(float n)
{
    reel = n;
}

float Complexe::getReel() const
{
    return reel;
}

void Complexe::setImaginaire(float n)
{
    imaginaire = n;
}

float Complexe::getImaginaire() const
{
    return imaginaire;
}

Complexe Complexe::addComp(const Complexe& c) const
{
    Complexe result;
    result.setReel(reel + c.getReel());
    result.setImaginaire(imaginaire + c.getImaginaire());
    return result;
}

Complexe Complexe::subComp(const Complexe& c) const
{
    Complexe result;
    result.setReel(reel - c.getReel());
    result.setImaginaire(imaginaire - c.getImaginaire());
    return result;
}

Complexe Complexe::multComp(const Complexe& c) const
{
    Complexe result;
    result.setReel(reel * c.getReel() - imaginaire * c.getImaginaire());
    result.setImaginaire(reel * c.getImaginaire() + imaginaire * c.getReel());
    return result;
}

void Complexe::afficher()
{
    std::cout << '(' << reel << " + " << imaginaire << "i)";
}