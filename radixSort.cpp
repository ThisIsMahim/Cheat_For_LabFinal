#include <bits/stdc++.h>
using namespace std;

int getMaxValue(const vector<int>& arr)
{
    return *max_element(arr.begin(), arr.end());
}

void countSort(vector<int>& arr,int exp){
    int n=arr.size();
    vector<int> output(n);
    vector<int> count(10,0);
    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i] += count[i-1];
    }
    for(int i = n - 1; i >= 0; i--){
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
}
void radixSort(vector<int>& arr){
    int maxValue = getMaxValue(arr);
    for(int exp=1;maxValue/exp>0;exp*=10){
        countSort(arr,exp);
    }
}
int main(){
    vector<int> arr = {170,45,75,90,802,24,2,66};
    radixSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}