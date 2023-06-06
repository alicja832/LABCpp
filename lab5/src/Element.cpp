#include <iostream>
#include "Element.h"
using namespace std;
Element::Element(int* tab,int n):rozm(n){
    tab1=new int[n];//alokacja pamięci dla tablicy
    int i;
    for(i=0;i<n;i++){
        tab1[i]=tab[i];
    }
    


}
Element::Element(const int* tab,int n){
    tab1=new int[n];
    rozm=n;
    int i;
    for(i=0;i<n;i++){
        tab1[i]=tab[i];
    }
    


}

Element::Element(){
    next=NULL;
}

Element::~Element(){
    cout<<endl;
    cout<<"Destruktor Element:";
    printElem();
    if(rozm)
        delete []tab1;
    cout<<endl;
}

void Element::printElem()const{
    cout<<"(";
    for(int i=0;i<rozm;i++)
        cout<<" "<<tab1[i];
    cout<<")";

 }
 