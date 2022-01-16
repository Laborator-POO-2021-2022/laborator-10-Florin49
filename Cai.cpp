#include "Cai.hpp"


Cai::Cai():nr_cai(0),horse_food(NULL),horse_food_quantity(0)
{

}
Cai::Cai(int n,const char* food,int quant):nr_cai(n),horse_food_quantity(quant)
{
     horse_food=strdup(food);
}
Cai::~Cai()
{
  delete[] horse_food;
}
void Cai::afisare()
{
    cout<<"In ferma sunt "<<nr_cai<<" cai";
    cout<<" care mananca "<<horse_food_quantity<<"kg de "<<horse_food<<" zilnic.\n";
}
int Cai::getQ()
{
  return horse_food_quantity;
}
float Cai::getConsumMed()
{
  return (float)this->getQ()/nr_cai;
}
const char* Cai::getNume()
{
  return "Cai";
}
int Cai::getCerere(const char* food)
{
    if(strcmp(horse_food,food)==0)
          return horse_food_quantity;
    return 0;
}