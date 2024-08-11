#include <iostream>

using namespace std;

void printExtremes(int arr[], int size)
{
    for(int i=0,j=size-1; i <= j;i++,j--)
    {
        if(arr[i] == arr[j]){
            cout << arr[i] << " ";
            continue;
        }
        cout << arr[i] << " " << arr[j] << " ";
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    printExtremes(arr,6);
}