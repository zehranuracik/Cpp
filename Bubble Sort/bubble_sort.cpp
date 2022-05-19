#include <iostream>
using namespace std;
int main(){
    int temp;
    int dizi[6] = {12,10,-8,4,78,3};
    for(int i=0;i<6;i++){
        cout << dizi[i] << " ";
    }
    cout << endl;
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            if(dizi[i]>dizi[j]){
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    for(int i=0;i<6;i++){
        cout << dizi[i] << " ";
    }
    return 0;
}