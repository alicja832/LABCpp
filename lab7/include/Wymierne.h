#pragma once
/**
 * @brief 
 * 
 */
class Wymierne{
    public:
    /**
     * @brief Construct a new Wymierne object
     * 
     */
    Wymierne();
    Wymierne(int a,int b);
    /**
     * @brief 
     * dla konwersji jawnej zamieniamy na l. rzeczywista
     * @return double tylko do jawnej konwersji!
     */
    explicit operator double()const;
    //wypisywanie
    void print()const;
    /**
     * @brief 
     * zwraca wymierna
     * @param a 
     * @return double 
     */
    static double ToDouble(Wymierne &a);

    private:
    int _a,_b;


};