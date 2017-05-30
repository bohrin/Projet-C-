#ifndef CARRE_HPP
#define CARRE_HPP
#include"Forme.hpp"

using namespace std;

class Carre : public Forme
{
  private:
    uint cote;
  protected:	
    void ecrire (ostream & os) const override;

  public:
    Carre(ulong couleur , uint x , uint y , uint cote);
    Carre(const Carre & orig );
    Carre(iostream & is);
    ~Carre();
    void dessiner(EZWindow & f , bool isActive )const override;
    inline uint getCote() const {return cote;}
    inline void setCote(uint _cote) {cote =  _cote;}
    double perimetre () const override;
};
#endif