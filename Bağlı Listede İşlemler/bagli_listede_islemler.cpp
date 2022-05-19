#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* start = NULL;
struct node* temp = NULL;
void Sona_ekle(int veri){
    struct node* sona_eklenecek = (struct node*)malloc(sizeof(struct node));
    sona_eklenecek->data = veri;
    sona_eklenecek->next = NULL;
    if(start == NULL){
        start = sona_eklenecek;
    }
    else{
        temp = start;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = sona_eklenecek;
    }
}
void Basa_ekle(int veri){
    struct node* basa_eklenecek = (struct node*)malloc(sizeof(struct node));
    basa_eklenecek->data = veri;
    basa_eklenecek->next = start;
    start = basa_eklenecek;
}
void Araya_ekle(int x, int y){
    temp = start;
    while(temp->next->data != x){
        temp = temp->next;
    }
    struct node* araya_eklenecek = (struct node*)malloc(sizeof(struct node));
    araya_eklenecek->data = y;
    struct node* onune_ekle = (struct node*)malloc(sizeof(struct node));
    onune_ekle = temp-> next;
    temp->next = araya_eklenecek;
    araya_eklenecek->next = onune_ekle;
}
void Sondan_sil(){
    temp = start;
    while (temp->next->next != NULL){
    temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
void Bastan_sil(){
    temp = start->next;
    free(start);
    start = temp;
}
void Aradan_sil(int x){
    struct node* onceki = NULL;
    struct node* sonraki = NULL;
    temp = start;
    while(temp->next->data != x){
        temp = temp->next;
    }
    if(temp->next == NULL){
        Sondan_sil();
    }
    onceki = temp;
    sonraki = temp->next->next;
    free(temp->next);
    onceki->next = sonraki;
}
void Ters_cevir(){
    struct node* prev = NULL;
    struct node* q;
    temp = start;
    while(temp!=NULL){
        q = temp->next;
        temp->next = prev;
        prev = temp;
        temp = q;
    }
    start = prev;
}
void Yazdir(){
    temp = start;
    while(temp->next!=NULL){
        cout << temp->data << " => ";
        temp  = temp->next;
    }
    cout << temp->data << endl;
}
int main(){
    while(true){
        int secim,x,y;
        cout << "1) BASA ELEMAN EKLE\n2) SONA ELEMAN EKLE\n3)ARAYA ELEMAN EKLE\n";
        cout << "4) SONDAN ELEMAN SIL\n5) BASTAN ELEMAN SIL\n6) ARADAN ELEMAN SILME\n7) TERS CEVIRME" << endl;
        cin >> secim;
        switch (secim){
        case 1:
            cout << "Basa eklenecek sayiyi giriniz: ";
            cin >> y;
            Basa_ekle(y);
            Yazdir();
            break;
        case 2:
            cout << "Sona eklenecek sayiyi giriniz: ";
            cin >> y;
            Sona_ekle(y);
            Yazdir();
            break;
        case 3:
            cout << "Onune ekleme yapmak istediginiz sayiyi giriniz: ";
            cin >> x;
            cout << "Eklemek istediginiz sayiyi giriniz: ";
            cin >> y;
            Araya_ekle(x,y);
            Yazdir();
            break;
        case 4:
            Sondan_sil();
            Yazdir();
            break;
        case 5: 
            Bastan_sil();
            Yazdir();
            break;
        case 6:
            cout << "Silmek istediginiz sayiyi giriniz: ";
            cin >> x;
            Aradan_sil(x);
            Yazdir();
            break;
        case 7: 
            Ters_cevir();
            Yazdir();
            break;
        default:
            break;
        }
    }
    return 0;
}