#include "Porci.hpp"
#include "Vaci.hpp"
#include "Capre.hpp"
#include "Cai.hpp"
#include "Gaini.hpp"

int main()
{
    Ferma** F;
    Ferma* pgvcc;
    F=new Ferma*[5];
    F[0]=new Vaci(10,"nutret",30);
    F[1]=new Gaini(100,"graunte",5);
    F[2]=new Cai(2,"nutret",8);
    F[3]=new Porci(8,"graunte",4,"iarba",5);
    F[4]=new Capre(4,"nutret",4);
    cout<<"Statistica:\n";
    for(int i=0;i<5;i++)
          F[i]->afisare();
    int q_dep=2000;///cantitate maxima in depozit



    ////CERINTA1-----------------------------------
    int q=0;
    for(int i=0;i<5;i++)
         q+=F[i]->getQ();///extragere cantitate
    
    float nr_zile=(float)q_dep/q;
    cout<<"Numarul maxim de zile in care depozitul plin de mancare asigura necesarul animalelor este de "<<(int)nr_zile<<"."<<endl;
    int gr=0,nu=0,ia=0;
    for(int i=0;i<5;i++)
    {
        gr+=F[i]->getCerere("graunte");
        nu+=F[i]->getCerere("nutret");   
        ia+=F[i]->getCerere("iarba");
    }
    cout<<"Cantitatea necesara de nutret pentru a umple depozitul si a asigura necesarul animalelor cat mai mult timp este de "<<nu*nr_zile<<"kg.\n";
    cout<<"Cantitatea necesara de graunte pentru a umple depozitul si a asigura necesarul animalelor cat mai mult timp este de "<<gr*nr_zile<<"kg."<<endl;
    cout<<"Cantitatea necesara de iarba pentru a umple depozitul si a asigura necesarul animalelor cat mai mult timp este de "<<ia*nr_zile<<"kg."<<endl;
    /////CERINTA2---------------------------------
    cout<<endl;
    float nr_umpleri=365/nr_zile;
    if((int)nr_umpleri==nr_umpleri)
         cout<<"Este nevoie de exact "<<nr_umpleri<<" umpleri ale depozitului intr-un an.";
    else
         cout<<"Este nevoie de "<<(int)nr_umpleri+1<<" umpleri ale depozitului intr-un an, ultima asigurand mancare si pentru inceputul anului viitor.";
    ////CERINTA3----------------------
    cout<<endl;
    if((int)nr_umpleri==nr_umpleri)
          cout<<"Nu a mai ramas mancare la final de an ";
    else
    {
          cout<<"Au mai ramas in total "<<((int)nr_umpleri+1-nr_umpleri)*q<<"kg de mancare, din care:\n";
          float r_nu,r_gr,r_ia;
          r_nu=((int)nr_umpleri+1-nr_umpleri)*nu;
          r_ia=((int)nr_umpleri+1-nr_umpleri)*ia;
          r_gr=((int)nr_umpleri+1-nr_umpleri)*gr;
          cout<<"-"<<r_nu<<"kg nutret"<<endl;
          cout<<"-"<<r_gr<<"kg graunte"<<endl;
          cout<<"-"<<r_ia<<"kg iarba"<<endl;
    }
    /////CERINTA4-------------------------------------------------
    cout<<"\nCantitatea zilnica necesara hranirii fiecarui animal este de "<<q<<"kg, din care:\n";
    cout<<"-"<<nu<<"kg nutret"<<endl;
    cout<<"-"<<gr<<"kg graunte"<<endl;
    cout<<"-"<<ia<<"kg iarba"<<endl;
    ///CERINTA5----------------------------
    cout<<"\nTop consumatori:\n";
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
          if(F[i]->getConsumMed()<F[j]->getConsumMed())
           {
               pgvcc=F[i];
               F[i]=F[j];
               F[j]=pgvcc;
           }
    for(int i=0;i<5;i++)
        cout<<F[i]->getNume()<<"->"<<F[i]->getConsumMed()<<"kg fiecare"<<endl;


    for(int i=0;i<5;i++)
         delete[] F[i];
    delete[] F;
    return 0;
}