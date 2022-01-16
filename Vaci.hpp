#ifndef VACI
#define VACI

#include "Ferma.hpp"

class Vaci: public Ferma
{
     int nr_vaci;
     char* cow_food;
     int cow_food_quantity;

  public:
     Vaci();
     Vaci(int,const char*,int);
     ~Vaci();

     void afisare();
     int getQ();
     float getConsumMed();
     const char* getNume();
     int getCerere(const char*);
     

};

#endif