#include<iostream>
#include <string.h>
using namespace std;
void linearsearch(int array[],int element){
    int temp=-1;
    for(int i=0;i<sizeof(array);i++){
        if(array[i]==element){
            temp=i;
            cout<<"element "<<element<<" is found at index :"<<temp<<endl;
        }
    }
    if(temp==-1){
        cout<<"element not found in array"<<endl;
    }

}
int main(){
    int size;
    cout<<"enter the size of the array that you wnated to create"<<endl;
    cin>>size;
    int array[size];
    int element;

    for(int i=0;i<size;i++){
        cout<<"enter the "<<i+1<<" element of array"<<endl;
        cin>>element;
        array[i]=element;
    }
    int value;
    cout<<"enter the element that you wanted to search"<<endl;
    cin>>value;
linearsearch(array,value); 
    return 0;
}