#include <iostream>
#include "Filters.h"

using std::cout;
using std::endl;

int por(char *a,char *b);
/**
 * @brief 
 * funckja wypisujaca
 * @param a 
 */
void cat(char **a){
   int i=0;
    while((*(a+i))!=nullptr){
       
        cout<<*(a+i)<<endl;
        i++;    
    }

}
/**
 * @brief 
 * wypisuje ile jest lini
 * @param a 
 * @return int 
 */
int wc_lines(char **a){
    int l=0;
    
    while((*(a+l))!=nullptr){
       l++;
   }
return l;
}

int wc_words(char **a){
    int l=0;
    int w=0;
    int wynik;
   while((*(a+l))!=nullptr){
       for(int i=0;i<wc_char(*(a+l));i++){
           if(*(*(a+l)+i)=='_')
                w+=1;
       }
        l++;
   }
   wynik=l+w;
return wynik;
}
char **tail(int n, char **a){
    int rozm=wc_lines(a);
    int k=rozm-n;

    if(k<0)
        return a;
    
return a+k;
}
char **head(int n, char **a){
    char **x= new char*[n];
    for(int i=0;i<n;i++){
        x[i]=*(a+i);
    }
return x;
}
int wc_char(char **a){
     int w=0;
     int l=0;
   while((*(a+l))!=nullptr){
        w+=wc_char( *(a+l));
       l++;
   }
return w;

}
int wc_char(char *a){
    int k=0;
    while(*(a+k))
        k++;
    return k;
}
void clear(char **a){
    delete [] a;
}
char **uniq(char **a){
    int n=wc_lines(a);
    char **nowy= new char*[n];
    int i,j,z;
    for(i=0;i<n;i++)
        nowy[i]=NULL;
    nowy[0]=*a;
    for(i=1,z=1;i<n,z<n;i++,z++){
            for(j=0;j<i;j++){

               if(por(*(a+i),nowy[j]))
                    z++;
            }
            nowy[i]=*(a+z);
    }
    return nowy;
}
/**
 * @brief 
 * funkcja pmocnicza,porównująca 2 stringi
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int por(char *a,char *b){
    int i=0;
    while(*(a+i) && *(b+i)){
        if(*(a+i)!=*(b+i))
            return 0;
        i++;
    }
    return 1;
}
