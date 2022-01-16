#include "Vaci.hpp"

Vaci::Vaci():nr_vaci(0),cow_food(NULL),cow_food_quantity(0)
{

}
Vaci::Vaci(int n,const char* food,int quant):nr_vaci(n),cow_food_quantity(quant)
{
    cow_food=strdup(food);
}
Vaci::~Vaci()
{
    delete[] cow_food;
}
void Vaci::afisare()
{
    cout<<"In ferma sunt "<<nr_vaci<<" vaci";
    cout<<" care mananca "<<cow_food_quantity<<"kg de "<<cow_food<<" zilnic.\n";
}
int Vaci::getQ()
{
    return cow_food_quantity;
}
float Vaci::getConsumMed()
{
  return (float)this->getQ()/nr_vaci;
}
const char* Vaci::getNume()
{
  return "Vaci";
}
int Vaci::getCerere(const char* food)
{ 
    if(strcmp(food,cow_food)==0)
       return cow_food_quantity;  
    return 0;

}