#ifndef CERCLE_HPP
#define CERCLE_HPP
#include"Forme.hpp"

class Cercle: public Forme
{
	private:
	   uint rayon;
	protected:	
       void ecrire (ostream & os) const override;
	
	public:
	   Cercle(ulong couleur , uint x , uint y , uint rayon);
	   Cercle(const Cercle & orig);
	   Cercle(iostream & is);
	   ~Cercle();
	   void dessiner(EZWindow & f , bool isActive )const override;
       inline uint getRayon() const {return rayon;}
       inline void setRayon(uint _rayon) {rayon =  _rayon;}
       double perimetre () const override;
};
#endif