#ifndef SLL
#define SLL

#include <iostream>
#define first(L) L.first
#define last(p)
#define last(L)
#define next(p)
#define info(p)
#define prec(p)

using namespace std;


struct elmList {

    address Next;
};

struct List{
    address First;
    address p
};


void createlist(List &L);
address allocate(infotype data);
void insertFirst(List &L, address p);
void insertlast(List &L, address p);
void deleteFirst(List &L, address &p);
void deletelast(List &L, address &p);

#endif // SLL
