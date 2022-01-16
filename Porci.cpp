#include "Porci.hpp"

Porci::Porci():nr_porci(0),pig_food1(NULL),pig_food_quantity1(0),pig_food2(NULL),pig_food_quantity2(0)
{


}
Porci::Porci(int n,const char* food1,int quant1,const char* food2,int quant2):nr_porci(n),pig_food_quantity1(quant1),pig_food_quantity2(quant2)
{
  pig_food1=strdup(food1);
  pig_food2=strdup(food2);  
}
Porci::~Porci()
{
    delete[] pig_food1;
    delete[] pig_food2;
}
void Porci::afisare()
{
    cout<<"In ferma sunt "<<nr_porci<<" porci";
    cout<<" care mananca "<<pig_food_quantity1<<"kg de "<<pig_food1;
    cout<<" si "<<pig_food_quantity2<<"kg de "<<pig_food2<<" zilnic.\n";
}
int Porci::getQ()
{
  return pig_food_quantity1+pig_food_quantity2;
}
float Porci::getConsumMed()
{
  return (float)this->getQ()/nr_porci;
}
const char* Porci::getNume()
{
  return "Porci";
}
int Porci::getCerere(const char* food)
{
  if(strcmp(food,pig_food1)==0)
       return pig_food_quantity1;
   if(strcmp(food,pig_food2)==0)
       return pig_food_quantity2;
   return 0;
}