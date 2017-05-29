#include<iostream>
using namespace std;
#include "Forme.hpp"


Forme::Forme(ulong couleur_, uint x, uint y)
: couleur(couleur_), ancre(x,y), selected(false)
{cerr << "Forme::Forme(ulong couleur_, uint x, uint y)"<< endl;}

Forme::Forme (const Forme & orig)
: couleur(orig.couleur), ancre(orig.ancre), selected(false)
{ cerr << "Forme ::Forme (const Forme &)" << endl;}

Forme::Forme( iostream & is)
: couleur(0), ancre(0,0), selected(false)
{is >> couleur >> ancre; }

Forme::~Forme()
{cerr << "Forme::~Forme()"<< endl;}

void Forme::dessiner(EZWindow & f, bool isActive)const
{
	f.setColor(ez_black);
	ancre.dessiner(f, isActive); // il y a une connerie ici probablement warning
    f.setColor(couleur);
}

ostream & operator << (ostream & os, const Forme & forme)
{
	forme.ecrire(os);
	return os;
}

void Forme:: ecrire (ostream & os)
{
	os << couleur<<""<<ancre;
}
