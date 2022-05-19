#include <iostream>
#define BOYUT 5
int dizi[BOYUT],top;
using namespace std;
void PUSH(int veri){
    if(top+1 == BOYUT){
        cout << "Stack Dolu." << endl;
    }
    else{
        top = top+1;
        dizi[top] = veri;
    }
}
void POP(){
    if(top == -1){
        cout << "Stack Bos." << endl;
    }
    else{
        top = top-1;
    }
}
int PEEK(){
    return dizi[top];
}
void Yazdir(){
    int i;
    for(i=0;i<top+1;i++){
        cout << dizi[i] << "  ";
    }
    cout << endl;
}
int main(){
    int secim,x;
    top = -1;
    while(true){
        cout << "1) PUSH\n2) POP\n3) PEEK\n";
        cin >> secim;
        switch(secim){
            case 1:
                cout << "Stack'e eklemek istediginiz degeri giriniz: ";
                cin >> x;
                PUSH(x);
                Yazdir();
                break;
            case 2: 
                POP();
                Yazdir();
                break;
            case 3:
                cout << PEEK() << endl;
                break;
        }
    }
    return 0;
}