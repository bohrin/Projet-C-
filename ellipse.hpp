#ifndef ELLIPSE_HPP
#define ELLIPSE_HPP

#include "Forme.hpp"

class Ellipse : public Forme
{
private:
  uint largeur, hauteur;

protected:
     void ecrire (ostream & os) const override;

public:
  Ellipse(ulong couleur, uint x, uint y, uint largeur, uint hauteur);
  Ellipse(const Ellipse & orig);
  Ellipse(iostream & is) ;
  ~Ellipse();
  void dessiner(EZWindow & f, bool isActive) const override;
  inline uint getLargeur() const {return largeur;};
  inline void setLargeur(uint _largeur) {largeur = _largeur;};
  inline uint getHauteur() const {return largeur;};
  inline void setHauteur(uint _hauteur) {hauteur = _hauteur;};
  double perimetre() const override;
};
#endif
