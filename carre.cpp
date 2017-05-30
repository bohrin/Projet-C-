
#include "carre.hpp"


using namespace std;

Carre::Carre(ulong couleur_, uint x_, uint y_, uint _cote):Forme (couleur_, x_, y_),
cote(_cote)
{
  cerr << "carre (ulong couleur_, ...)" << endl;
}

Carre::Carre(iostream & is):Forme(is), cote(5)
{
  is >> cote;
  cerr << "Carre::Carre(istream &)";
}

Carre::~Carre()
{
  cerr << "Carre::Carre()" << endl;
}

double Carre::perimetre() const
{
  return cote*cote;
}

void Carre::ecrire(ostream & os) const
{
  os << "Carre";
  Forme::ecrire(os);
  os << cote;
}

void Carre::dessiner(EZWindow & w, bool isactive) const
{
  Forme::dessiner(w, isactive);
  const Point & ancre = getAncre();
  w.drawRectangle(ancre.getx(), ancre.gety(), ancre.getx() + cote, ancre.gety() + cote);
}

