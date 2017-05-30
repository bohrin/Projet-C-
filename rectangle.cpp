#include<iostream>

#include "rectangle.hpp"


using namespace std;

Rectangle::Rectangle(ulong couleur_, uint x_, uint y_, uint _largeur, uint _hauteur):Forme (couleur_, x_, y_),
largeur(_largeur), hauteur(_hauteur)
{
  cerr << "Rectangle (ulong couleur_, ...)" << endl;
}

Rectangle::Rectangle(iostream & is):Forme(is), largeur(5), hauteur(5)
{
  is >> largeur >> hauteur;
  cerr << "Rectanglr::Rectangle(istream &)";
}

Rectangle::~Rectangle()
{
  cerr << "Rectangle::Rectangle()" << endl;
}

double Rectangle::perimetre() const
{
  return (largeur + hauteur) * 2;
}

void Rectangle::ecrire(ostream & os) const
{
  os << "Rectangle";
  Forme::ecrire(os);
  os << largeur << " " << hauteur;
}

void Rectangle::dessiner(EZWindow & w, bool isactive) const
{
  Forme::dessiner(w, isactive);
  const Point & ancre = getAncre();
  w.drawRectangle(ancre.getx(), ancre.gety(), ancre.getx() + largeur, ancre.gety() + hauteur);
}
