typedef unsigned int uint;

#include "Forme.hpp"
#include "ez-draw++.hpp"

using namespace std;

class Rectangle : public Forme
{
  private:
    uint largeur, hauteur;
    void ecrire (ostream & os) const;

  public:
    Rectangle(ulong couleur , uint x , uint y , uint largeur , uint hauteur);
    Rectangle(const Rectangle & orig );
    Rectangle(istream & is);
    ~Rectangle();
    void dessiner(EZWindow & f , bool isActive )const override;
    inline uint getLargeur() const {return largeur;}
    inline void setLargeur(uint _largeur) {largeur =  _largeur;}
    inline uint getHauteur() const {return hauteur;}
    inline void setHauteur (uint _hauteur) {hauteur = _hauteur;}
    double perimetre () const override;
};
