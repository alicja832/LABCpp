#include "Element.h"
#include <iostream>
#include <utility>
using namespace std;
//class, which consist of int array

    int Element:: getObjects(){
        return Element::amount;
    }
    /////Element el3 = Element::addElemRev(*pp1); //tworzy punkt z odwróconą kolejnością współrzędnych
    Element Element:: addElemRev(Element& other){
        int tab[]={other._array[2],other._array[1],other._array[0]};
        Element nowy(tab,3);
        to_id--;
        Element tmp=nowy;
    return tmp;
    }
  
   

    int Element::amount;
    int Element::to_id;//liczymy zyjace objekty

