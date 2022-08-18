#include <iostream>
#include <string.h>
using namespace std;
bool checksorted(int array[],int n){
        if(n==0 || n==1){
            return true;
        }
        else{
            if(array[n-1]<array[n-2]){
                return false;
            }
            else{
                return checksorted(array,n-1);
            }
        }
}
int binarysearch(int array[],int low,int high,int element){
        int mid=(low+high)/2;
        if(sizeof(array)>=1){
        if(array[mid]==element){
            return mid;
        }
        else if(element>array[mid]){
            low=mid+1;
            return binarysearch(array,low,high,element);
        }
        else{
            high=mid-1;
            return binarysearch(array,low,high,element);
        }
        }

        else{
            return -1;
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

    if(checksorted(array,size)==true){
        int element1;
        cout<<"yes your array is sorted binary search is applicable"<<endl;
        cout<<"enter the element that you want seach"<<endl;
        cin>>element1;
        int result=binarysearch(array,0,size-1,element1);
        if(result!=-1){
            cout<<"element found at index :"<<result<<endl;
        }
        else{
            cout<<"element not present in array"<<endl;
        }
    }

    else{
        cout<<"sorry array is unsorted cannot apply binary search"<<endl;
    }
    return 0;
}