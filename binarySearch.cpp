#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[],int l,int r,int key){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
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
    sort(arr, arr + n);

    cout << "Sorted array: ";
    printArray(arr, n);

    cout<<"Enter the element you are searching for:";
    int key;
    cin>>key;

    int result=binarySearch(arr,0,n-1,key);
    if(result!=-1){
        cout<<"\nElem found at "<<result;
    }
    else
        cout<<"\nNot found";
}
