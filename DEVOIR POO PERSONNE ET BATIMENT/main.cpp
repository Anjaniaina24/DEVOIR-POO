#include "Etudiant/Etudiant.h"
#include "Etablissement/Etablissement.h"
#include "Medecin/Medecin.h"
#include "Hopital/Hopital.h"

using namespace std;
using namespace peuple;
using namespace batiment;

int main(int argc, char* argv[])
{

    cout << "Personne : " << endl;

    Personne moi("Pierre", 18);
    moi.display();

    cout << endl << "Etudiant : " << endl;

    Etudiant etudiant("Pierre", 19, "Informatique");
    etudiant.display();

    cout << endl << "Infrastructure : " << endl;

    Infrastructure maInfrastructure("Anosy", Personne("Pierre", 45));
    maInfrastructure.display();

    cout << endl << "Etablissement : " << endl;

    Etablissement monEtablissement("Ankatso", Personne("Mr Tahiry", 45), "MISA");
    monEtablissement.display();
    
    cout << endl << "Medecin : " << endl;

    Medecin monMedecin("Dr Raktos", 45, "Cardiologue");
    monMedecin.display();

    cout << endl << "Hopital : " << endl;


    Hopital monHopital("Befelatanana", Personne("Dr Pierre", 60), "HJRA");
    monHopital.display();

    return 0;
}