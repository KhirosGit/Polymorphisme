#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#include <iomanip>
#include <string>

class Element
{
public:
    Element();
    virtual ~Element();
   virtual void Afficher();
};

#endif // ELEMENT_H
