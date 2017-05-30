
#include"cercle.hpp"

Cercle::Cercle(ulong couleur_, uint x_, uint y_, uint _rayon):Forme (couleur_, x_, y_),
rayon(_rayon)
{}

Cercle::Cercle(iostream & is):Forme(is), rayon(5)
{
  is >> rayon;
}

Cercle::~Cercle()
{}

double Cercle::perimetre() const
{
   
  return 3.14*(rayon*2);
}

void Cercle::ecrire(ostream & os) const
{
  os << "Cercle";
  Forme::ecrire(os);
  os << rayon;
}

void Cercle::dessiner(EZWindow & w, bool isactive) const
{
  Forme::dessiner(w, isactive);
  const Point & ancre = getAncre();
  w.drawCircle(ancre.getx(), ancre.gety(), ancre.getx() + rayon, ancre.gety() + rayon);
}
