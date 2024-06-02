#include <iostream>
#include <algorithm>
using namespace std;

int sequentialSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
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
    cout<<"Enter the element you are searching for: ";
    int key;
    cin>>key;

    int index=sequentialSearch(arr,n,key);
    if(index!=-1){
        cout<<"Elem found at "<<index;
    }
    else
        cout<<"Not found";
}

