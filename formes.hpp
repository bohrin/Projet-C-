#include "Forme.hpp"
#include "ez-draw++.hpp"

using namespace std;

class Formes
{
  const size_t maxformes;
  size_t nbformes;
  Forme** formes;

public:
  Formes(size_t taille = 200);
  ~Formes();
  void ajouter(Forme* pf);
  Forme* isOver(uint x, uint y);
  void dessiner(EZWindow & w);
  friend ostream & operator << (ostream & os, const Formes & fs);
  void sauver(ostream & os)const;
  void charger(istream & is);
};
