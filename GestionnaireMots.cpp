#include "GestionnaireMots.h"

GestionnaireMots::GestionnaireMots()
{
    cout << "GestionnaireMots: Constructeur appele.\n";
}


GestionnaireMots::~GestionnaireMots()
{
    cout << "GestionnaireMots: Destructeur appele.\n";
}


Matrice GestionnaireMots::choisirMotAleatoire()
{
    srand(time(0));
    return mots[rand() % 10];
}
