#include <iostream>
using namespace std;

int main(){
    int kredi_miktari,aylik,taksit_sayisi;
    float faiz_miktari,odeme,toplam_odeme;
    cout << "Istediginiz kredi miktarini giriniz: ";
    cin >> kredi_miktari;
    cout << "Aylik odeme miktarini giriniz: ";
    cin >> aylik;
    odeme = aylik;
    if(kredi_miktari%aylik!=0){
        int kalan = kredi_miktari%aylik;
        taksit_sayisi = kredi_miktari/aylik+1;
    }
    else{
        taksit_sayisi = kredi_miktari/aylik;
    }
    cout << "   ODEME\t  FAIZ" << endl << "----------------------------" << endl;
    for(int i=0;i<taksit_sayisi;i++){
        odeme += odeme*0.02;
        if(i+1>9){
            cout << i+1 << ".| " << odeme << "\t  " << odeme-aylik << endl;
        }
        else{
            cout << i+1 << ". | " << odeme << "\t  " << odeme-aylik << endl; 
        }
        toplam_odeme += odeme;
    }
    cout << endl << "TOPLAM ODEME MIKTARI: " << toplam_odeme << endl << "TOPLAM FAIZ MIKTARI: " << toplam_odeme-kredi_miktari;
}