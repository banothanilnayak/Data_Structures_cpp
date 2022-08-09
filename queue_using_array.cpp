#include<iostream>
#include<string.h>
using namespace std;
class queue{
private:
int array[4];
int front;
int rear;
public:
queue(){
front=-1;
rear=-1;
}
bool isempty(){
    if(front==-1 && rear==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isfull(){
    if(rear==3){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(int element){
if(isfull()){
    cout<<"cannot enqueue overflow"<<endl;
}
else if(rear==-1 && front==-1){
    front++;
    rear++;
    array[rear]=element;
    cout<<"enqueue operation is successfull"<<endl;
}
else if(rear==front){
    rear++;
    array[rear]=element;
    cout<<"enqueue operation is successfull"<<endl;
}
else{
    rear++;
    array[rear]=element;
    cout<<"enqueue operation is successfull"<<endl;
}
}
void dequeue(){
    if(isempty()){
        cout<<"cannot dequeue underflow"<<endl;
    }
    else if(front==rear){
        int temp=array[front];
        front=-1;
        rear=-1;
        cout<<"dequeue operation is successfull"<<endl;
        cout<<"dequeued element is "<<temp<<endl;
    }
    else{
        int temp=array[front];
        //array[front]=NULL;
        front++;
        cout<<"dequeue operation is successfull"<<endl;
        cout<<"dequeued element is "<<temp<<endl;
    }
}
void display(){
    if(isempty()){
        cout<<"cannot display becouse queue is empty"<<endl;
    }
    else{
        for(int i=front; i<=rear;i++){
            cout<<"the "<<i<<"th position elment in queue is"<<array[i]<<endl;
        }
    }   
}
void count(){
    int size=(rear-front)+1;
    cout<<"the number of elments in queue is :"<<size<<endl;
}
};
int main(){
    queue q;
    int option;
    int element;
    do{
 cout<<"WELCOME_TO_QUEUE_DATASTRUCTURE__"<<endl;
    cout<<"please select the below options to proceed:"<<endl;
    cout<<"0)clear screen \n"<<"1)isempty \n"<<"2)isfull \n"<<"3)enqueu \n"<<"4)dequeue\n"<<"5)count \n"<<"6)display \n"<<"7)exit"<<endl;
    cout<<"select the option"<<endl;
    cin>>option;
    switch(option){
        case 0:
        system("cls");
        case 1:
        if(q.isempty()){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"queue is not empty"<<endl;
        }
        break;
        case 2:
        if(q.isfull()){
            cout<<"queue is full "<<endl;
        }
        else{
            cout<<"queue is not full"<<endl;
        }
        break;
        case 3:
        cout<<"enter the elment to be enqueued"<<endl;
        cin>>element;
        q.enqueue(element);
        break;
        case 4:
        q.dequeue();
        break;
        case 5:
        q.count();
        case 6:
        q.display();
        break;
        case 7:
        cout<<"bye "<<endl;
        break;
        default:
        cout<<"pleas select the valid option"<<endl;
        }
}while(option!=7);

    return 0;
}