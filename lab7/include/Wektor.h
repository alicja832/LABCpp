#pragma once
#include "Wymierne.h"
/**
 * @brief 
 * 
 */
class Wektor{
    public:
    Wektor();
    //konwersja niejawna-konstruktor
    Wektor(int a);
    //kopiujacy
    Wektor(const Wektor &other);
    //powstaje z trzechw wymietrnych

    Wektor(Wymierne X,Wymierne Y,Wymierne Z);
    /**
     * @brief 
     * Trzy funkcje ustawiajace x,y,z
     * @param a 
     * @param b 
     * @return Wektor& 
     */
    Wektor& SetX(int a, int b){
        _X=Wymierne(a,b);
        return *this;
    }
     Wektor& SetY(int a, int b){
        _Y=Wymierne(a,b);
        return *this;
    }

    Wektor& SetZ(int a, int b){
        _Z=Wymierne(a,b);
        return *this;
    }
    /**
     * @brief 
     * zwracamy wartosc wspolrzednych
     * @return Wymierne& 
     */
    Wymierne& getX(){
        return _X;
    }
    Wymierne& getY(){
        return _Y;
    }
    Wymierne& getZ(){
        return _Z;
    }
    //wyswietlanie
    void print()const;

    private:
    Wymierne _X,_Y,_Z;


};