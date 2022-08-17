#include<iostream>
#include<string.h>
using namespace std;
// node is the class used to just create and intialize the diffrent nodes but linked is not done with this cls
 class node {
    public:
    int key;
    int data;
    node *next;
    node(){
        key=0;
        data=0;
        next=NULL;
    }
    node(int k,int d){
        key=k;
        data=d;
    }
 };
 class circularlinkedlist{
public:
    node*head;
    circularlinkedlist(){
        head=NULL;
    }
    circularlinkedlist(node *n){
        head=n;
    }
    node* nodeexistwithkey(int key){
        node *temp=NULL;
    if(head!=NULL){
        if(head->key==key){
             temp=head;
            return temp;
        }
    else{
            node *ptr=head;
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

    }
    else{
        return temp;
    }
}
void appendnode(node *n){
    if(nodeexistwithkey(n->key)!=NULL){
        cout<<"sorry the node with key "<<n->key<<"already exits please try with different key"<<endl;
    }
    else{
        if(head==NULL){
            head=n;
            cout<<"node appended successfully"<<endl;
        }
        else{
             node *ptr=head;
             while(ptr->next!=NULL){
                ptr=ptr->next;
             }  
            ptr->next=n;
            n->next=head;
            cout<<"node appended succesfullyt"<<endl;
        }
    }
}
 void prependnode(node *n){
    if(nodeexistwithkey(n->key)!=NULL){
        cout<<"sorry node with key "<<n->key<<"already exits please try with another key"<<endl;
    }
    else{
        if(head==NULL){
            head=n;
            cout<<"node prepended successfully"<<endl;
        }
        else{
            n->next=head;
            head=n;
            cout<<"node prepended successfully"<<endl;
        }
    }
 }
void insertafterkeynode(int key,node *n){
    node *temp1=nodeexistwithkey(key);
    if(temp1!=NULL){
        if(nodeexistwithkey(n->key)!=NULL){
            cout<<"node with key "<<n->key<<"already exits "<<endl;
        }
        else{
       n->next=temp1->next;
       temp1->next=n;
       cout<<"node inserted succesffuly"<<endl;
    }
    }
    else{
        cout<<"node with key"<<key<<"doesnot exits in LL"<<endl;
    }
}
void deletenodewithkey(int key){
    node *temp=nodeexistwithkey(key);
    node *preptr=head;
    node *nextptr=head->next;
    if(head==NULL){
        cout<<"singly linked is already empty so cannot delete node"<<endl;
    }

    else if(temp!=NULL){
        if(preptr==temp){
            head=preptr->next;
            delete preptr;
            cout<<"node link succesfully unlinked"<<endl;
        }
        else if(nextptr==temp){
            preptr->next=nextptr->next;
            delete nextptr;
            cout<<"node link succesfully unlinked"<<endl;
        }
        else{
            while(nextptr->next!=NULL){
                preptr=preptr->next;
                nextptr=nextptr->next;
                if(nextptr==temp){
                    preptr->next=nextptr->next;
                    delete nextptr;
                    cout<<"node link successfully unlinked"<<endl;
                }
            }
        }
    }

    else{
        cout<<"key with node does not exits so cannot delete"<<endl;
    }
}
    
void updatenodebykey(int key,int data){
    node *temp=nodeexistwithkey(key);
    if(head==NULL){
        cout<<"singly list is empty nothing is their to update"<<endl;
    }
    else if(temp!=NULL){
        temp->data=data;
        cout<<"node data is successfully updated"<<endl;
    }
    else{
        cout<<"any node doesnt with key "<<key<<"doesnot exist in LL"<<endl;
    }
}

void display(){
    if(head==NULL){
        cout<<"empty linked list nothing to display"<<endl;
    }
    else{
        node *ptr=head;
        cout<<"singly Linked list values:"<<endl;
        do{
            cout<<"("<<ptr->key<<","<<ptr->data<<")-->";
            ptr=ptr->next;
        }while(ptr!=head);
    }
}

};

int main(){     
    circularlinkedlist c;
    int option;
    int key;
    int data;
    do{
        cout<<"\n";
    cout<<"WELCOME_TO_CLLIST_DATASTRUCTURE__"<<endl;
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
        if(c.nodeexistwithkey(key)!=NULL){
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
        c.appendnode(newnode1);
        break;
        }

        case 4: 
        {
        cout<<"enter the key of node to prepended "<<endl;
        cin>>key;
        cout<<"enter the data of node to be prepended"<<endl;
        cin>>data;
        node *newnode2=new node(key,data);
        c.prependnode(newnode2);
        break;
        }

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
        c.insertafterkeynode(key1,newnode3);
        break;
    }
        case 6:
        {
        cout<<"enter the key of node that you wanted to delete"<<endl;
        cin>>key;
        c.deletenodewithkey(key);
        break;
        }
        case 7:
        {cout<<"enter the key of node that you wnated to update"<<endl;
        cin>>key;
        cout<<"enter the data to updated "<<endl;
        cin>>data;
        c.updatenodebykey(key,data);
        break;
        }
        case 8:
        {
        c.display();
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
