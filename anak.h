#ifndef ANAK_H_INCLUDED
#define ANAK_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef string infotype_a;
typedef struct elmist_anak *addr_anak;

struct elmist_anak {
    infotype_a info;
    addr_anak next;
};

struct List_anak {
    addr_anak first;
};

addr_anak alokasiAnak(infotype_a x);
addr_anak findElm_Anak(List_anak L, infotype_a P);

void createListAnak(List_anak &L);

void insertFirstAnak(List_anak &L, addr_anak P);
void insertLastAnak(List_anak &L, addr_anak P);

void deleteFirst_Anak(List_anak &L, addr_anak &P);
void deleteLast_Anak(List_anak &L, addr_anak &P);

void printAnak(List_anak &L);

void SearchInfoAnak(List_anak L,addr_anak Q);

#endif // ANAK_H_INCLUDED

//Muhammad Arif
