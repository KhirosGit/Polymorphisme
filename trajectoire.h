#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include "element.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Trajectoire
{
private :
   Element parcours;
   int nbEtapesMaxi;
   int prochaineEtape;
public:
    Trajectoire(const int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(const Element* _pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
