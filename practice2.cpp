#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1,j=high,temp;
    while(i<j){
        if(arr[i]<pivot){
            i++;
        }
        if(arr[j]>pivot){
            j--;
        }
        if(arr[i]>=pivot&&arr[j]<=pivot){

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;j--;
        }

    }
    if(pivot>arr[j]){
        arr[low]=arr[j];
        arr[j]=pivot;
        return j;
    }
    arr[low]=arr[j-1];
    arr[j-1]=pivot;
    return j-1;

}
void quicksort(int arr[],int low,int high){
    
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main(){
    int n,e;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cout<<"Enter the element:";
       cin>>e;
       arr[i]=e;
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}