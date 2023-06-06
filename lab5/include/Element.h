 //Klasa Element reprezentuje element listy jednokierunkowej i posiada prywatne pole wskaźnika na dynamiczną tablicę int oraz wskaźnik na następny element.
  //Ponadto posiada potrzebne konstruktory i destruktory oraz metody.
  #pragma once
  class MyList;
  class Element{
    public:
    friend class MyList;
    Element();
    ~Element();
    /**
     * @brief Construct a new Element object
     * 
     * @param tab 
     */
    Element(int *tab,int);
    Element(const int *tab,int);

    void printElem()const;

   

    private:
    int *tab1;
    int rozm;
    Element *next;

  };
