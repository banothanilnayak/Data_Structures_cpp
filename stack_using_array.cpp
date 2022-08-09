#include <iostream>
#include <string.h>
using namespace std;

class stack{
private:
int top;
int array[5];
public:
stack(){
     top=-1;
}

void isempty(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}

void isfull(){
    if(top==3){
        cout<<" stack is full"<<endl;
    }
    else{
        cout<<"not full"<<endl;
    }
}

void push(int x){
if(top==3){
        cout<<" cannot insert overflow  "<<endl;
        }
else{
    top+=1;
    array[top]=x;
    cout<<"push operation successfull"<<endl;
}
}

void pop (){
    if(top==-1){
        cout<<"underflow stack is empty"<<endl;
    }
    else{
        int temp=array[top];
        array[top]=NULL;
        top-=1;
        cout<<"the poped element is "<<temp<<endl;
        cout<<"pope operation is successfull"<<endl;   
    }
}

void peek(int x){
    if(top==3){
        cout<<"peek operation failed becouse of empty stack"<<endl;
    }
    else{
        cout<<"element at position "<<x<<" is "<<array[x]<<endl;
        
    }
}

void count(){
    if(top==-1){
        cout<<"count operation failed becouse of empty stack"<<endl;
    }
    else{
        cout<<"no of elments in stack are"<<top+1<<endl;
    }
}

void change(int x,int y){
    if(top==-1){
        cout<<"change operation failed becouse of empty stack"<<endl;
    }
    else{
        array[x]=y;
        cout<<"element changed at position"<< x<<" as "<<y<<endl;
        cout<<"change operation is successfull"<<endl;
    }
}

void display(){
    if(top==-1){
        cout<<"cannot display stack is empty"<<endl;
    }
    else{
        cout<<"elements in stack are:"<<endl;
        for(int i=top;i>=0;i--){
            cout<<i<<"th index elment is :"<<array[i]<<endl;
        }
    }
}
};

int main(){
    stack s1;
    int element;
    int position;
    int posi_element;
    int option;
do{
    cout<<"__WELCOME_TO_STACK_DATASTRUCTURE__"<<endl;
    cout<<"please select the below options to proceed:"<<endl;
    cout<<"0)clear screen \n"<<"1)isempty \n"<<"2)isfull \n"<<"3)push \n"<<"4)pop \n"<<"5)peek \n"<<"6)count \n"<<"7)change \n"<<"8)display \n"<<"9)exit"<<endl;
    cout<<"select the option"<<endl;
    cin>>option;
    switch(option){
        case 0:
        system("cls");
        case 1:
        s1.isempty();
        break;
        case 2:
        s1.isfull();
        break;
        case 3:
        cout<<"enter the elment to be pushed"<<endl;
        cin>>element;
        s1.push(element);
        break;
        case 4:
        s1.pop();
        break;
        case 5:
        cout<<"enter the position of element "<<endl;
        cin>>posi_element;
        s1.peek(posi_element);
        break;
        case 6:
        s1.count();
        case 7:
        int position1;
        int change;
        cout<<"enter the position"<<endl;
        cin>>position1;
        cout<<"enter the element to be changed at position:"<<position1<<endl;
        cin>>change;
        s1.change(position1,change);
        break;
        case 8:
        s1.display();
        break;
        case 9:
        cout<<"bye "<<endl;
        break;
        }
}while(option!=9);
return 0;
}
