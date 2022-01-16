#include "Capre.hpp"


Capre::Capre():nr_capre(0),goat_food(NULL),goat_food_quantity(0)
{


}
Capre::Capre(int n,const char* food,int quant):nr_capre(n),goat_food_quantity(quant)
{

    goat_food=strdup(food);
}
Capre::~Capre()
{
    delete[] goat_food;
}
void Capre::afisare()
{
    cout<<"In ferma sunt "<<nr_capre<<" capre";
    cout<<" care mananca "<<goat_food_quantity<<"kg de "<<goat_food<<" zilnic.\n";
}
int Capre::getQ()
{
   return goat_food_quantity;
}
float Capre::getConsumMed()
{
  return (float)this->getQ()/nr_capre;
}
const char* Capre::getNume()
{
  return "Capre";
}
int Capre::getCerere(const char* food)
{
    if(strcmp(food,goat_food)==0)
        return goat_food_quantity;
    return 0;
}