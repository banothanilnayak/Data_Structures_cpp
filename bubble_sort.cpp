//this is implementation of bubble sort 
#include<iostream>
#include<string.h>
using namespace std;
void bubblesort(int array[],int n){
    if(n==0||n==1){
        cout<<"array is already sorted "<<endl;

    }
    else{
        //flag concept is used for the bubule sort algo with optimazation 
        //int flag=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<=n-i-1;j++){
                if(array[j]>array[j+1]){
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                    //flag=1;
                }
                // if(flag==1){
                //     flag=0;
                // }
                // else{
                //     break;
                // }
            }
        }
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
    cout<<"before sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n"<<endl;
    bubblesort(array,size);

    cout<<"after bubble sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
return 0;
}