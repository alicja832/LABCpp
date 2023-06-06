#pragma once
#include <iostream>
#include "Wymierne.h"
using namespace std;
using namespace rls;
class Double{
    public:
        Double(double x):_x(x)
        {

        }
        //konwersja z Wymierne na Double
        Double(Wymierne x):_x(static_cast<double>(x))
        {

        }
        void print(const Double& x)const
        {
            x.print();
        }
        //wypisywanie
        void print()const
        {
            a++;
            cout<<"Print nr "<<a<<". Val ="<<_x<<endl;
        }
        void setx(const Double& x)
        {
            _x=x._x;
        }
        //funkcja, która ustawia x wykorzystując const cast
        void setconstx(const Double& x)const
        {
            const_cast<Double*>(this)->_x=x._x;
        }
        //getter
        double Getx()const
        {
            return _x;
        }
       
    private:
        double _x;
        static int a;
    
};
int Double::a=0;
void print(Double x){
    x.print();
        }
//function, which multiply two Doubles

double pomnoz(const Double& x,const Double& y)
{
    return x.Getx()*y.Getx();
}
