typedef unsigned int uint;

#include <iostream>
#include "ez-draw++.hpp"

using namespace std;

class Point
{
  private:
    static const uint taille = 3;
    uint x, y;

  public:
    Point(uint x, uint y);
    Point(const Point & o);
    Point(istream & is);
    ~Point();
    inline uint getx() const { return x;}
    inline uint gety() const { return y;}
    inline void setxy (uint x_, uint y_){x=x_;y=y_;}
    bool isOver(uint x_, uint y_);
    void dessiner(EZWindow & f, bool active = false)const;
    friend ostream & operator << (ostream & os, const Point & p);
    friend istream & operator >> (istream & is , Point & p);
};
