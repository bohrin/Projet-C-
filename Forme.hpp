#include <iostream>
#include "Point.hpp"
using namespace std;

typedef unsigned long ulong;
class Forme{
	private:
	   ulong couleur;
	   Point ancre;
	   bool selected;
	 protected:
	   virtual void ecrire(ostream & os) const;
	 public:
	   Forme (ulong couleur, uint x, uint y);
	   Forme (const Forme & orig);
	   Forme( istream & is);
	   ~Forme ();
	   inline ulong getCouleur() const {return couleur;};
	   inline void setCouleur( ulong couleur_){couleur= couleur_;};
	   inline Point getAncre()const {return ancre;};
	   inline void setAncre (Point _ancre) {ancre= _ancre;};
	   inline bool isOver( uint _x, uint _y) {return ancre.isOver(_x, _y);};
	   virtual void dessiner (EZWindow & p, bool isactive);
	   void ecrire(ostream & os);
	   friend ostream & operator << (ostream & os, const Forme & forme);
	   virtual double perimetre() const;
	   static Forme *charger(ostream & os);
};
