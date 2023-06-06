 #include "Wymierne.h"
 #include <iostream>
 using namespace std;
  Wymierne::Wymierne():Wymierne(0,1)
  {

  }
Wymierne::Wymierne(int a,int b):_a(a),_b(b)
    {

    }
    
Wymierne::operator double()const{

    double x=((double)_a)/((double)_b);
    
    
    return x;
}

void Wymierne::print()const{
    if(_b==1)
        cout<<_a;
    else
        cout<<_a<<"/"<<_b;

}

double Wymierne::ToDouble(Wymierne& a){
    
    return static_cast<double>(a);
   
}
    
