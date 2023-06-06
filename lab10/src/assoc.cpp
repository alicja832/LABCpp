#include <iostream>
#include "assoc.h"
using namespace std;
El::El(){
    value=0;
    key="";
}
El::~El()
{

}
El::El(std::string name,double x):key(name),value(x)
{

}
El::El(const El& other):El(other.key,other.value){

}
El& El::operator=(const El& a){
    if(&a==this)
       return *this;
    key=a.key;
    value=a.value;
    return *this;
}


Assoc::Assoc(){
    tab=nullptr;
}
Assoc::Assoc(const Assoc& other){
    _rozm=other._rozm;
    El *ptab=new El[other._rozm];
    int i;
    for(i=0;i<_rozm;i++)
    ptab[i]=other.tab[i];
    delete[]tab;
    tab=ptab;
}
Assoc::~Assoc()
{   
    if(tab){
    delete[]tab;
    tab=nullptr;
    }
}

void Assoc::insert(std::string name,double x){
    El tmp(name,x);
    if(n==0){
        tab=new El[1];
        tab[0]=tmp;
        n++;
        _rozm=n;
        return;
    }
    El *ptab=new El[n+1];
    int i;
    for(i=0;i<n;i++){
        ptab[i]=tab[i];
    }
    ptab[i]=tmp;
    delete []tab;
    tab=ptab;
    n++;
    _rozm=n;


}
double& Assoc::operator[](std::string name){
    int i=this->contains(name);
    if(i==0){
        (this)->insert(name,0.);
        return tab[_rozm-1].value; 
    } 
    else 
        return tab[i].value;
}
void Assoc::print(std::string a)const{
    int i;
    for(i=0;i<_rozm;i++)
    cout<<a<<" klucz:"<<tab[i].key<<" wartosc: "<<tab[i].value<<endl;

}
double& Assoc::operator[](std::string name)const{
    int i=this->contains(name);
     return tab[i].value;
}

Assoc& Assoc::operator=(const Assoc& other){
    if(&other==this)
    {
        cout<<"jest"<<endl;
        return *this;
    }
    else{
    _rozm=other._rozm;
    El *ptab=new El[other._rozm];
    int i;
    for(i=0;i<_rozm;i++)
    ptab[i]=other.tab[i];
    delete[]tab;
    tab=ptab;
    return *this;
    }
}
int Assoc::contains(std::string name)const{
    int i;
    for(i=0;i<_rozm;i++)
        if(tab[i].key==name)
                return i;
    
    return 0;
}
   
std::string print(int a){

    string s="Znaleziono";
    string s1="Nie Znaleziono";
    if (a) return s;
    return s1;
}
int Assoc::n=0;