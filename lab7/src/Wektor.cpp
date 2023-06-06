#include "Wektor.h"
#include <iostream>
using namespace std;
Wektor::Wektor(int a):
Wektor(Wymierne(a,1),Wymierne(a,1),Wymierne(a,1))
{

}
Wektor::Wektor(){

}
Wektor::Wektor(const Wektor &other):
Wektor(other._X,other._Y,other._Z)
{

}
void Wektor::print()const{
    cout<<"[";
    _X.print();
    cout<<", ";
    _Y.print();
    cout<<", ";
    _Z.print();
    cout<<"]";
    cout<<endl;
}
Wektor::Wektor(Wymierne X,Wymierne Y,Wymierne Z):
_X(X),
_Y(Y),
_Z(Z){

}