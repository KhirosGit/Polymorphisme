#include <iostream>
#include "element.h"
#include "segment.h"
#include "trajectoire.h"

using namespace std;

int main()
{
   Segment leSegment(7,0.90);
   Segment autreSegment(4,0);
   Trajectoire laTraj(2);
   laTraj.Afficher();
   leSegment.Afficher();
   autreSegment.Afficher();

    return 0;
}
