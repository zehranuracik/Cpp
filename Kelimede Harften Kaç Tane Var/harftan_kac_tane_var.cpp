#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cumle[30];
    int  sayac = 0,sayac2=0;
    cout << "Lutfen bir cumle giriniz: ";
    gets(cumle);
    for (int i=0;cumle[i];i++){
        if (cumle[i]!=32){
            for (int j =0;cumle[j]; j++){
                if(cumle[j]==cumle[i]){
                    sayac ++;
                }
            }
            for(int k=i;k>=0;k--){
                if(cumle[i]==cumle[k]){
                    sayac2++;
                }
            }
            if(sayac2==1){
                cout << cumle[i] << " harfinden " << sayac << " kadar vardir." << endl;
            }
            sayac2 = 0;
            sayac = 0;
        }
    }
    return 0;
}