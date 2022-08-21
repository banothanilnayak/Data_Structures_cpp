#include <iostream>
#include <string.h>
using namespace std;
void insertionsort(int array[],int n){
    if(n==1||n==0){
        cout<<"your array is already sorted"<<endl;
    }
    else{
        //here iteration starts from i=1 becouse we wanted to insert 1 index elment into sorted list 
        for(int i=1;i<=n-1;i++){
            int temp=array[i]; 
            int j;
            for(j=i-1; (j>=0 && array[j]>temp);j--){//if array[j] is greater then temp then only move a[j] to j+1
                array[j+1]=array[j];
            }
            array[j+1]=temp;
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
    insertionsort(array,size);

cout<<"after insertion sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

return 0;
}
//ANALYSIS:

//time complexity=O(n^2);{
    //worst time complexity =O(n^2);
    //average time complexity=O(n^2);
    //best time complexity=O(n);
//}
//space complexity=O(1);
//it is inplace sorting algorithm
// it is not a stable