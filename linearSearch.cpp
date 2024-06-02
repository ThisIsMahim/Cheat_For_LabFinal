#include <iostream>
#include <vector>
using namespace std;

void linear_search(vector<int>& arr, int n, int k)
{
    int flag = 0;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            flag = 1;
            index=i;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Found at index "<< index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
int main()
{
    cout << "Enter the size of the array:\n ";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout<< "Enter the number of elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int k;
    cout << "Enter the number to be searched: ";
    cin >> k;
    linear_search(arr, n, k);
    return 0;
}