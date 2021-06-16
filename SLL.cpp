#include <iostream>
#include "SLL.h"

using namespace std;

void createList(List &L) {
    first(L) = NULL;
}

void insertFirst(List &L, address p) {
    next(p) = first(L);
    first(L) = p;

}

void insertlast(List &L, address p) {
    address Q = First(L);
    while (Next(Q) != NULL){
        Q = Next(Q);
    }
    Next(Q) = P;
}

    void deleteFirst(List &L, address p) {
        if (first(L) != NULL) {
        p = first(L);
        first(L) = next(p);

        next(p) = NULL;
}

void deletelast(List &L, address p) {
    if(first(p) == NULL){
        cout<<"kosong"<<endl;
    } else if(first(next(p)== NULL){
        delete first(p);
        return NUll;

    }
}


