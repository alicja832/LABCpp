#include "silnia.h"
#include <iostream>
int silnia(int n){
    int z=n;
    while(n>1){
        z=z*(n-1);
        n--;

    }
return z;
}
int silnia_rec(int n){
    if(n==1) return n;
    return n*silnia_rec(n-1);
}
