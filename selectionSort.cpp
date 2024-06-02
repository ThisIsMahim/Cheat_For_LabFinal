#include <iostream>
#include <algorithm>
using namespace std;

//selection sort
void selectionSort(int arr[], int n){
   for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex])
            minIndex=j;
    }
    if(minIndex!=i)
        swap(arr[i],arr[minIndex]);
   }

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter length of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elem of arr\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}


