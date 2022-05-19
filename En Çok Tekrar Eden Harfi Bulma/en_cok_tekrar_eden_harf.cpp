#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cumle[30];
    int  sayac = 0,kontrol=0;
    char harf;
    cout << "Lutfen bir cumle giriniz: ";
    gets(cumle);
    for (int i=0;cumle[i];i++){
        if (cumle[i]!=32){
            for (int j = 0;cumle[j]; j++){
                if(cumle[j]==cumle[i]){
                    sayac ++;
                }
            }
            if(sayac>kontrol){
                harf = cumle[i];
                kontrol = sayac;
            }
            sayac = 0;
        }
    }
    cout << "Cumlede en  cok kullanilan harf: " << harf;
    return 0;
}