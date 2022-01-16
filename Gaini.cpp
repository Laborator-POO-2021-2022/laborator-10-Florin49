#include "Gaini.hpp"

Gaini::Gaini():nr_gaini(0),chicken_food(NULL),chicken_food_quantity(0)
{

}
Gaini::Gaini(int n,const char* food,int quant):nr_gaini(n),chicken_food_quantity(quant)
{
    chicken_food=strdup(food);

}
Gaini::~Gaini()
{
   delete[] chicken_food;
}
void Gaini::afisare()
{
    cout<<"In ferma sunt "<<nr_gaini<<" gaini";
    cout<<" care mananca "<<chicken_food_quantity<<"kg de "<<chicken_food<<" zilnic.\n";
}
int Gaini::getQ()
{
    return chicken_food_quantity;
}
float Gaini::getConsumMed()
{
  return (float)this->getQ()/nr_gaini;
}
const char* Gaini::getNume()
{
  return "Gaini";
}
int Gaini::getCerere(const char* food)
{
    if(strcmp(food,chicken_food)==0)
         return chicken_food_quantity;
    return 0;
}