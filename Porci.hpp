#ifndef PORCI
#define PORCI

#include "Ferma.hpp"

class Porci: public Ferma
{
   int nr_porci;
   char* pig_food1;
   int pig_food_quantity1;
   char* pig_food2;
   int pig_food_quantity2;
   public:
       Porci();
       Porci(int,const char*,int,const char*,int);
       ~Porci();
       void afisare();
       int getQ();
       float getConsumMed();
       const char* getNume();
       int getCerere(const char*);
};




#endif