#pragma once
#include <iostream>
#include <string>
#include"Matrice.h"
using namespace std;
class GestionnaireMots {
private:
    const Matrice mots[10] = {
        {"programmation", "L'art d'ecrire du code informatique"},
        {"ordinateur", "Machine que vous utilisez en ce moment"},
        {"pendu", "Un jeu classique pour deviner des mots"},
        {"developpement", "Processus de creation d'un logiciel"},
        {"jeu", "Activite ludique pour se divertir"},
        {"algorithme", "Une suite d'instructions pour resoudre un problème"},
        {"intelligence", "Ce qui distingue les humains des machines (jusqu'a un certain point !)"},
        {"mathematiques", "Discipline qui etudie les nombres et les formes"},
        {"technologie", "Ensemble d'outils avances crees par les humains"},
        {"innovation", "Processus de création de nouvelles idees ou solutions"}
    };

public:
    GestionnaireMots();
    ~GestionnaireMots();

    Matrice choisirMotAleatoire();
};
