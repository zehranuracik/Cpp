#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct ogrenci_bilgi{
    int puan;
    struct ogrenci_bilgi* sonraki;
};

int main(){
    struct ogrenci_bilgi* ogrenci1 = (struct ogrenci_bilgi*)malloc(sizeof(struct ogrenci_bilgi));
    struct ogrenci_bilgi* ogrenci2 = (struct ogrenci_bilgi*)malloc(sizeof(struct ogrenci_bilgi));
    ogrenci1->puan = 55;
    ogrenci1->sonraki = ogrenci2;
    ogrenci2->puan = 60;
    ogrenci2->sonraki = NULL;
    cout << "Ogrenci1 puan => Ogrenci2 puan = " << ogrenci1->puan << "=>" << ogrenci2->puan;
    return 0;
}