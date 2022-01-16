#ifndef GAINI
#define GAINI

#include "Ferma.hpp"
class Gaini: public Ferma
{
   int nr_gaini;
   char* chicken_food;
   int chicken_food_quantity;

   public:
        
        Gaini();
        Gaini(int,const char*,int);
        ~Gaini();

        void afisare();
        int getQ();
        float getConsumMed();
        const char* getNume();
        int getCerere(const char*);

};






#endif