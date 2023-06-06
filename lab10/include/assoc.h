#pragma once
//klasa opisujaca element
class Assoc;
class El{
public:
friend class Assoc;
/**
 * @brief Construct a new El object
 * 
 */
El();
~El();
/**
 * @brief Construct a new El object
 * 
 * @param name 
 * @param x 
 */
El(std::string name,double x);
//konstruktor kopiujacy
El(const El&);
//operator przypisania
El& operator=(const El&);
private:
double value;
std::string key;
};
//klasa opisujaca tablice assocjacyjna
class Assoc{
    public:
    Assoc();
    /**
     * @brief Construct a new Assoc object
     * 
     */
    Assoc(const Assoc&);
    /**
     * @brief 
     * dodaje element do tablicy
     * @param name 
     * @param x 
     */
    ~Assoc();
    void insert(std::string name,double x);
    /**
     * @brief 
     * op.indeksowania
     * @param name 
     * @return double& 
     */
    double& operator[](std::string name);
    double& operator[](std::string name)const;
    /**
     * @brief 
     * wypisywanie
     * @param a 
     */
    void print(std::string a)const;
    //operator przypisania
    Assoc& operator=(const Assoc&);
    //spr czy tablica zawiera element
    int contains(std::string name)const;
    private:
    El *tab;
    static int n;
    int _rozm;

};
std::string print(int a);
