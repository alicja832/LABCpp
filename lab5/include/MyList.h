/**Klasa MyList i zawiera prywatny wskaźnik na head
 oraz publiczne metody:
  * konstruktor - ustawiający wskaźniki na NULL i ew. 
  nadający nazwę (dawne initList),
  * destruktor - usuwający wszystkie elementy listy oraz
   samą listę,
  * add - wstawia wartość int*  lub Element na początek 
  listy,
  * removeFirst - usuwa pierwszy element z listy wraz z 
  dealokacją pamięci obiektu typu Element,
  * print - drukuje całą listę w postaci <el1 el2 el3>
  * copyRev - wykonująca kopię listy podanej jako argument.
**/
#pragma once
class Element;
class MyList{
    public:
    friend class Element;
    MyList();
    ~MyList();
    /**
     * @brief Construct a new My List object
     * konstruktor kopiujący
     */
    MyList(const MyList&);
  /**
   * @brief 
   * tutaj dodajemy od razu gotowy element
   */
    void add(Element*);
    /**
     * @brief 
     * musimy najpierw stworzyc element
     * @param tab 
     * @param n 
     */
    void add(int *tab, int n);
    void add(const int *tab, int n);
  /**
   * @brief 
   * czy jest pusta czy nie
   * @return int 
   */

    int isEmpty()const;
    void copyRev(MyList*);
    void print(char *)const;
    void removeFirst();

    Element* getHead()const;

    private:
    Element *head;


};
