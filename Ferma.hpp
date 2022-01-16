#ifndef FERMA
#define FERMA

#include <iostream>
#include <cstring>

using namespace std;

class Ferma
{
   public:
       
       virtual ~Ferma()=0;
       virtual void afisare() =0;
       virtual int getQ()=0;
       virtual float getConsumMed()=0;
       virtual const char* getNume()=0;
       virtual int getCerere(const char*)=0;
};

#endif