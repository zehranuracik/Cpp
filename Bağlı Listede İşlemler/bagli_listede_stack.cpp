#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* top = NULL;
void PUSH(int veri){
    struct node* eklenecek = (struct node*)malloc(sizeof(struct node));
    eklenecek->data = veri;
    eklenecek->next= NULL;
    if(top!=NULL){
        eklenecek->next = top;
    }
    top = eklenecek;
}
void POP(){
   if(top->data == NULL){
       cout << "Stack bos." << endl;
   }
   else{
       struct node* temp;
       temp = top;
       top = top->next;
       free(temp);
   }
}
int PEEK(){
    return top->data;
}
void Yazdir(){
    struct node* q;
    q = top;
    while(q!=NULL){
        cout << q->data << "=>";
        q = q->next;
    }
    cout << "NULL" << endl;
}
int main(){
    int secim,x;
    while(true){
        cout << "1)PUSH\n2)POP\n3)PEEK\n";
        cin >> secim;
        switch(secim){
            case 1:
                cout << "Eklemek istediginiz sayiyi giriniz: ";
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