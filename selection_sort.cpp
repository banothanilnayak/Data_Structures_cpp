#include<iostream>
#include<string.h>
using namespace std;
void selectionsort(int array[],int n){
    if(n==0||n==1){
        cout<<"array is already sorted"<<endl;
    }
    else{

        //sorting in ascending order
        
        for(int i=0;i<n-1;i++){     //iteration loop
            int min=i;    //assuming ith and compare remaining elements with ith index element
            for(int j=i+1;j<=n-1;j++){
                if(array[j]<array[min]){
                    min=j;
                }
            }
            if(i!=min){    //possibility that ith element can be at its sorted position by default you do not swap itself
            int temp=array[i];
            array[i]=array[min];
            array[min]=temp;
            }
        }


    //     //sorting in descending order
    //     for(int i=0;i<n-1;i++){     //iteration loop
    //         int max=i;    //assuming ith and compare remaining elements with ith index element
    //         for(int j=i+1;j<=n-1;j++){
    //             if(array[j]>array[max]){
    //                 max=j;
    //             }
    //         }
    //         if(i!=max){    //possibility that ith element can be at its sorted position by default you do not swap itself
    //         int temp=array[i];
    //         array[i]=array[max];
    //         array[max]=temp;
    //         }
    //     }
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
    cout<<"after applying selection sort"<<endl;
    selectionsort(array,size);
        for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }


    return 0;
}

//ANALYSIS:

//time complexity=O(n^2);
//space complexity=O(1);
//it is inplace sorting algorithm
// it is not a stable