#include<iostream>
#include <string.h>
using namespace std;
class node{
    public:
    int key;
    int data;
    node*prev;
    node*next;
    node(){
        key=0;
        data=0;
        prev=NULL;
        next=NULL;
    }
    node (int k,int d){
        key=k;
        data=d;
        prev=NULL;
        next=NULL;
    }
};
class doublylinkedlist {
    public:
    node *head;
    doublylinkedlist(){
        head=NULL;
    }
    doublylinkedlist(node *n){
        head=n;
    }

node* nodeexistwithkey(int key){
    node *temp=NULL;
    if(head!=NULL){
        node*ptr=head;
        while(ptr!=NULL){
            if(ptr->key==key){
                temp=ptr;
                return temp;
            }
            else{
                ptr=ptr->next;
            }
        }
    }
    else{
        cout<<"DLL is emtpy"<<endl;
    }
}
void appendnode(node *n){
    if(head==NULL){
        head=n;
    }
    else if(head!=NULL){
        if(nodeexistwithkey(n->key)!=NULL){
            cout<<"node with key "<<n->key<<"already exits in DLL"<<endl;
        }
        else{
            node *ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=n;
            n->prev=ptr;
            n->next=NULL;
            cout<<"node appended successfully"<<endl;
        }
    }
}
void prependnode(node *n){
    if(head=NULL){
        head=n;
        cout<<"node prepended"<<endl;
    }
    else{
         head->prev=n;
         n->prev=NULL;
         n->next=head;
         head=n;
         cout<<"node prepended"<<endl;
    }
}
void insertafterkeynode(int key,node*n){
    node *temp=nodeexistwithkey(key);
    if(head==NULL){
        cout<<"empty DLL"<<endl;
    }
    else{
        if(temp!=NULL){
            if(nodeexistwithkey(n->key)!=NULL){
                cout<<"node already exits with key:"<<n->key<<endl;
            }
            else{
            temp->next=n;
            n->prev=temp;
            n->next=temp->next;
            temp->next->prev=n;
            cout<<"node inserted successfully"<<endl;
            }
            }
            else{
                cout<<"node not found with key"<<key<<endl;
            }
        }
    }
void deletnodewithkey(int key){
    node *temp=nodeexistwithkey(key);
    node*prevptr=head;
    node*nextptr=head->next;
    if(head==NULL){
        cout<<"empty DLL"<<endl;
    }
    else{
        if(temp!=NULL){
        prevptr=head;
        nextptr=head->next;
        if(prevptr->key==key){
            head=head->next;
            head->prev=NULL;
            delete prevptr;
            cout<<"node with key"<<key<<"successfully deleted"<<endl;
        }
        else{
            while(nextptr!=NULL){
                if(nextptr->key==key){
                    prevptr->next=nextptr->next;
                    nextptr->next->prev=prevptr;
                    delete nextptr;
                    cout<<"node with key"<<key<<"successfully deleted"<<endl;
                }
                else{
                    prevptr=prevptr->next;
                    nextptr=nextptr->next;
                }
            }
        }
    }
        else{
            cout<<"node with key"<<key<<"doesnt exits"<<endl;
        }
    }
}

void updatenodebykey(int key,int data){
    node*temp=nodeexistwithkey(key);
    if(head==NULL){
        cout<<"empty DLL"<<endl;
    }
    else{
        if(temp!=NULL){
            temp->data=data;
            cout<<"node updated successfully"<<endl;
        }
        else{
            cout<<"node with key does not exits in DLL"<<endl;
        }
    }
}

void display(){
    if(head==NULL){
        cout<<"empty linked list nothing to display"<<endl;
    }
    else{
        node *ptr=head;
        cout<<"singly Linked list values:"<<endl;
        while(ptr!=NULL){
            cout<<"("<<ptr->key<<","<<ptr->data<<")-->";
            ptr=ptr->next;
        }
    }
}

};
int main(){     
    doublylinkedlist d;
    int option;
    int key;
    int data;
    do{
        cout<<"\n";
    cout<<"WELCOME_TO_DLLIST_DATASTRUCTURE__"<<endl;
    cout<<"please select the below options to proceed:"<<endl;
    cout<<"1)clear screen \n"<<"2)check node exists with key \n"<<"3)append node\n"<<"4)prepend node \n"<<"5)insert after keynode \n"<<"6)delete node by key \n"<<"7)update node by key \n"<<"8)display \n"<<"9)exit"<<endl;
    cout<<"select the option"<<endl;
    cin>>option;
    switch(option){
        case 1:
        {
        system("cls");
        }
        case 2:
     {
        cout<<"enter the key of the node that you wnt to chck"<<endl;
        cin>>key;
        if(d.nodeexistwithkey(key)!=NULL){
            cout<<"node exits "<<endl;
        }
        else{
            cout<<"node doesnt exits"<<endl;
        }
        break;
    }
        case 3:
        {
        cout<<"enter the key of node to appended "<<endl;
        cin>>key;
        cout<<"enter the data of node to be appended"<<endl;
        cin>>data;
        node *newnode1=new node(key,data);
        d.appendnode(newnode1);
        break;
        }

        case 4: 
        {
        cout<<"enter the key of node to prepended "<<endl;
        cin>>key;
        cout<<"enter the data of node to be prepended"<<endl;
        cin>>data;
        node *newnode2=new node(key,data);
        d.prependnode(newnode2);
        break;}

        case 5:
    {
        int key1;
        cout<<"enter the key of existing node "<<endl;
        cin>>key1;
        cout<<"enter the key of new node to inserted"<<endl;
        cin>>key;
        cout<<"enter the data of new node to inserted"<<endl;
        cin>>data;
        node *newnode3=new node(key,data);
        d.insertafterkeynode(key1,newnode3);
        break;
    }
        case 6:
        {
        cout<<"enter the key of node that you wanted to delete"<<endl;
        cin>>key;
        d.deletnodewithkey(key);
        break;
        }
        case 7:
        {cout<<"enter the key of node that you wnated to update"<<endl;
        cin>>key;
        cout<<"enter the data to updated "<<endl;
        cin>>data;
        d.updatenodebykey(key,data);
        break;
        }
        case 8:
        {
        d.display();
        break;
        }
        case 9:
        {
        cout<<"BYE ANIL "<<endl;
        break;
        }
    }
        }while(option!=0);
return 0;
}