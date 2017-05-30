#include "Forme.hpp"

using namespace std;

class Triangle : public Forme
{
  private :
    uint cote1, cote2, cote3;
    void ecrire(ostream & os ) const;

  public :
    Triangle(ulong couleur, uint x, uint y, uint cote1, uint cote2, uint cote3);
    Triangle(const Triangle & orig);
    Triangle(iostream & is);
    ~Triangle();
    void dessiner (EZWindow & f, bool isActive) const override;
    inline uint getCote1() const {return cote1;}
    inline void setCote1(uint _cote1) {cote1 = _cote1;}
    inline uint getCote2() const {return cote2;}
    inline void setCote2(uint _cote2) {cote2 = _cote2;}
    inline uint getCote3() const {return cote3;}
    inline void setCote3(uint _cote3) {cote3 = _cote3;}
    double perimetre() const override;

};
