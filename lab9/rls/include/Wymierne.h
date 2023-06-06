#pragma once
#include <string>
/**
 * @brief 
 * 
 */
namespace rls{

class Wymierne{
    public:
    /**
     * @brief Construct a new Wymierne object
     * 
     */
    Wymierne();
    Wymierne(int a,int b=1);
    
    void setM(int a)const;
    //getery
    double GetM()const{
        return _b;
    }
    double GetL()const{
        return _a;
    }
    //funkcja konwertująca na double'a
    explicit operator double()const;
    //wypisywanie
    void print()const;
    //z nazwą
    void print(std::string name)const;
    int nwd(int, int)const;
    /**
     * @brief 
     * zwraca wymierna
     * @param a 
     * @return double 
     */
    static Wymierne pomnoz(const Wymierne& a,const Wymierne& b);

    private:
    int _a,_b;


};

//ta sama funkcja tylko że poza klasą
   const Wymierne pomnoz(const Wymierne& a,const Wymierne& b);
}

