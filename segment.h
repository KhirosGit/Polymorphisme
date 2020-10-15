#ifndef SEGMENT_H
#define SEGMENT_H
#include "element.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Segment : public Element
{
private:
    double longueur;
    double angle;
public:
    Segment(const double _longueur,const double _angle);
    void Afficher();

};

#endif // SEGMENT_H
