#include "Ellipse.hpp"
#include <cmath>

Ellipse::Ellipse(ulong couleur_, uint x_, uint y_, uint _largeur, uint _hauteur ):Forme(couleur_, x_, y_),
largeur(_largeur), hauteur(_hauteur)
{
  cerr << "Ellipse::Ellipse(ulong...)" <<endl;
}

Ellipse::Ellipse(iostream & is):Forme(is), largeur(5), hauteur(5)
{
  is >> largeur >> hauteur;
  cerr << "Elipse::Ellipse(istream &)";
}

Ellipse::~Ellipse()
{
  cerr << "Ellipse::Ellipse()" << endl;
}

double Ellipse::perimetre() const
{
  return 2*3.14*sqrt(1/2*(largeur*largeur + hauteur*hauteur));
}

void Ellipse::ecrire(ostream & os) const
{
  os << "Ellipse";
  Forme::ecrire(os);
  os << largeur << " " << hauteur;
}

void Ellipse::dessiner(EZWindow & w, bool isactive) const
{
  Forme::dessiner(w, isactive);
  const Point & ancre = getAncre();
  w.drawCircle(ancre.getx(), ancre.gety(), ancre.getx() + largeur, ancre.gety() + hauteur);
}
