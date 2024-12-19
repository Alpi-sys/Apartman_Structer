#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

struct Daire {
    int daireNo;             
    int kisiSayisi;          
    char enBuyukIsim[50];    
};

struct Apartman {
    char apartmanIsmi[50];   
    int daireSayisi;        
    struct Daire daireler[10]; 
};

int main() {
    struct Apartman apartman;

    
    strcpy(apartman.apartmanIsmi, "Gunes Apartmani");
    apartman.daireSayisi = 3;

    
    apartman.daireler[0].daireNo = 1;
    apartman.daireler[0].kisiSayisi = 4;
    strcpy(apartman.daireler[0].enBuyukIsim, "Ahmet");

    apartman.daireler[1].daireNo = 2;
    apartman.daireler[1].kisiSayisi = 2;
    strcpy(apartman.daireler[1].enBuyukIsim, "Fatma");

    apartman.daireler[2].daireNo = 3;
    apartman.daireler[2].kisiSayisi = 3;
    strcpy(apartman.daireler[2].enBuyukIsim, "Mehmet");

    
    printf("Apartman Ismi: %s\n", apartman.apartmanIsmi);
    printf("Daire Sayisi: %d\n\n", apartman.daireSayisi);

    for (int i = 0; i < apartman.daireSayisi; i++) {
        printf("Daire No: %d\n", apartman.daireler[i].daireNo);
        printf("Kisi Sayisi: %d\n", apartman.daireler[i].kisiSayisi);
        printf("En Buyuk Kisi: %s\n\n", apartman.daireler[i].enBuyukIsim);
    }

    return 0;
}
