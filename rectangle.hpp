typedef unsigned int uint;

#include "Forme.hpp"
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#define MyRectangle Rectangle

using namespace std;

class Rectangle : public Forme
{
  private:
    uint largeur, hauteur;
  protected:
    void ecrire (ostream & os) const override;

  public:
    Rectangle(ulong couleur , uint x , uint y , uint largeur , uint hauteur);
    Rectangle(const Rectangle & orig );
    Rectangle(iostream & is);
    ~Rectangle();
    void dessiner(EZWindow & f , bool isActive )const override;
    inline uint getLargeur() const {return largeur;}
    inline void setLargeur(uint _largeur) {largeur =  _largeur;}
    inline uint getHauteur() const {return hauteur;}
    inline void setHauteur (uint _hauteur) {hauteur = _hauteur;}
    double perimetre () const override;
};
#endif