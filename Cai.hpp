#ifndef CAI
#define CAI

#include "Ferma.hpp"

class Cai: public Ferma
{
    int nr_cai;
    char* horse_food;
    int horse_food_quantity;
    
    public:
          Cai();
          Cai(int,const char*,int);
          ~Cai();
          void afisare();     
          int getQ();
          float getConsumMed();
          const char* getNume();
          int getCerere(const char*);

};





#endif