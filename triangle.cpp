#include "triangle.hpp"

using namespace std;

Triangle::Triangle(ulong couleur_, uint x_, uint y_, uint _cote1, uint _cote2, uint _cote3):Forme(couleur_, x_,y_)
,cote1(_cote1),cote2(_cote2),cote3(_cote3)
{
  cerr << "Triangle (ulong couleur_, ...)" << endl;
}

Triangle::Triangle(iostream & is):Forme(is), cote1(6), cote2(4), cote3(2)
{
  cerr << "Triangle::Triangle(iostream & is";
}

Triangle::~Triangle()
{
  cerr << "Triangle::~Triangle";
}

double Triangle::perimetre() const
{
  return cote1 + cote2 + cote3;
}

void Triangle::ecrire(ostream & os) const
{
  os << "Triangle";
  Forme::ecrire(os);
  os << cote1 << cote2 << cote3;
}

void Triangle::dessiner(EZWindow & f, bool isActive) const
{
  Forme::dessiner(f, isActive);
  const Point & ancre = getAncre();
  f.drawTriangle(ancre.getx() + cote1, ancre.gety() + cote1, ancre.getx() + cote2, ancre.gety() + cote2, ancre.getx() + cote3, ancre.gety() + cote3);
}
