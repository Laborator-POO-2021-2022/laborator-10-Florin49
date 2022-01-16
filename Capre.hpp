#ifndef CAPRE
#define CAPRE

#include "Ferma.hpp"

class Capre: public Ferma
{ 
    int nr_capre;
    char* goat_food; 
    int goat_food_quantity;
    
    public:
         Capre();
         Capre(int,const char*,int);
         ~Capre();
         void afisare();
         int getQ();
         float getConsumMed();
         const char* getNume();
         int getCerere(const char*);
};



#endif