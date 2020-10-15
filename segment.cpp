#include "segment.h"



Segment::Segment(const double _longueur, const double _angle)
{
    longueur=_longueur;
    angle=_angle;

    // cout << "Contructeur de la classe Segment" << endl;
}

void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur << setw(8) << "A = " << angle << endl;
}
