#include "Wymierne.h"
#include <iostream>
 using namespace std;
 using namespace wymierne;
  Wymierne::Wymierne():Wymierne(0,1)
  {

  }
Wymierne::Wymierne(int a,int b):_a(a),_b(b)
    {
        if(b==0) _b=1;

    }
    
Wymierne::operator double()const{

    double x=((static_cast<double>(_a))/(static_cast<double>(_b)));
    
    
    return x;
}

void Wymierne::print()const{
    int x=this->nwd(_a,_b);
    int _a1=_a/x;
    int _b1=_b/x;

    if(_b1==1){
        cout<<_a1;
        cout<<endl;
        return;
    }
    else
        cout<<_a1<<"/"<<_b1;
    cout<<endl;

}
void Wymierne::print(char *name)const{
    cout<<name<<" ";
    this->print();
 }


Wymierne Wymierne::pomnoz(const Wymierne& a,const Wymierne& b){
    Wymierne x(a.GetL()*b.GetL(),a.GetM()*b.GetM());
    return x;
}


const Wymierne wymierne::pomnoz(const Wymierne& a,const Wymierne& b){
    Wymierne x(a.GetL()*b.GetL(),a.GetM()*b.GetM());
    return x;
}
void Wymierne::setM(int a)const
{
    const_cast<Wymierne*>(this)->_b=a;
}
//do drukowania
int Wymierne::nwd(int m, int n)const{
  int oldm, oldn;
    while( m % n != 0 ){
        oldm = m;
        oldn = n;
      m = oldn;
      n = oldm % oldn;
  }
    return n;
  } 