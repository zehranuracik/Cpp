#include <iostream>
#define BOYUT 5
using namespace std;
int kuyruk[BOYUT], front = -1, rear = -1;
void enQueue(int veri){
    if(rear == BOYUT){
        cout << "Kuyruk Dolu." << endl;
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear = rear+1;
        kuyruk[rear] = veri;
    }
}
void deQueue(){
    if(front == -1 || front > rear){
        cout << "Kuyruk Bos." << endl;
        front = -1;
        rear = -1;
    }
    else{
        front = front+1;
    }
}
void Yazdir(){
    int i;
    for(i=front;i<=rear;i++){
        cout << kuyruk[i] << "=>";
    }
    cout << endl;
}
int main(){
    int secim,x;
    while(true){
        cout << "1)ENQUEUE\n2)DEQUEUE\n";
        cin >> secim;
        switch(secim){
            case 1:
                cout << "Eklemek istediginiz sayiyi giriniz: ";
                cin >> x;
                enQueue(x);
                Yazdir();
                break;
            case 2:
                deQueue();
                Yazdir();
                break;
        }
    }
}