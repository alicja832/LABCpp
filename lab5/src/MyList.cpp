#include "MyList.h"
#include "Element.h"
#include <iostream>
using namespace std;
MyList::MyList(const MyList& a){
    head=a.head;
}
MyList::MyList(){
    head=NULL;

}
MyList::~MyList(){
    cout<<"Destruktor my list"<<endl;
    if(head){

        //tmp=head->next;
        delete head;
        //head=tmp;

    }
    

}
    void MyList:: add(Element* x){
        if(!head){
            head=x;
            head->next=NULL;
        }
        else{
            //ustawiamy el czyli nowy->stary->...->NULL
            //Element *tmp=head;
            x->next=head;
            head=x;
        }
        
    }
    void MyList::add(int *tab, int n){
        Element *nowy=new Element(tab,n);
        add(nowy);

    }
   void MyList::add(const int *tab, int n){

    Element *nowy=new Element(tab,n);
        add(nowy);

    }

    Element*  MyList::getHead()const{
        return head;
    }
    int  MyList::isEmpty()const{
        if(head)
        return 0;
        else
        return 1;
    }
    //musimy ją odwrócić
    void MyList:: copyRev( MyList* k){
     k->head=this->head;

    }
    void MyList::print(char* t)const{
        cout<<t<<endl;
        cout<<"<";
        Element *tmp=head;
        while(tmp){
            tmp->printElem();
            tmp=tmp->next;
        }
        cout<<">";

    }
    void MyList::removeFirst(){
        Element *tmp;
        if(head){
            tmp=head->next;
            delete head;
            head=tmp;
        }
        
    }
