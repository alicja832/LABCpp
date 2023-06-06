#pragma once
#include <iostream>
#include <utility>
using namespace std;
//class, which consist of int array
class Element{
    public:
    friend class MyList;
    Element(){
        to_id++;
        amount++;//we create a new object
    }
    Element(int *tab,int length):
    _length(length),
    _array(new int[length])
    {   to_id++;
        amount++;
        _id=to_id;
        for(int i=0;i<length;i++)
            _array[i]=tab[i];

    }
    /////////////KOnstruktor kopiujacy
    Element(const Element& other):
    Element(other._array,other._length){
        cout<<"Konstruktor kopiujący "<<to_id<<endl; 
    }
    /////////////////////Konstruktor przenoszący
     Element(Element&& other)
     noexcept:
    _array(std::exchange(other._array,nullptr)),
    _length(std::exchange(other._length,0))
    {   to_id++;
        amount++;
        _id=to_id;
        cout<<"Konstruktor przenoszący "<<_id<<endl; 
    }
    /**
     * @brief Destroy the Element object
     * 
     */
    ~Element(){
        cout<<"destruktor"<<endl;
        to_id--;
        amount--;
        if(_array && _length)
        delete []_array;
    }
    /**
     * @brief Get the Objects object
     * 
     * @return int 
     */
    static int getObjects();
    /**
     * @brief 
     * zwraca element z przemienioną kolejnośćią wsp
     * @return Element 
     */
    static Element addElemRev(Element&);
  
    void printElem()const{
        cout<<"Id_"<<_id<<"(";
        //w razie jakby był zniszony
        int i;
        if(!_array)
            return;
        for( i=0;i<_length-1;i++){
            cout<<_array[i]<<",";
        }
            cout<<_array[i]<<")";
    }

    static int amount;
    static int to_id;//liczymy zyjace objekty
    static Element x;
    private:
    int _length;//rozmiar tablicy
    int *_array;
    int _id;
};
