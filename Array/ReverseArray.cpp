#include <iostream>

using namespace std;

void reverseArray(int arr[], int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
}
int main()
{
    int arr[6] = {3,1,6,2,10,11};

    reverseArray(arr,5);

    for(auto x : arr)
     cout << x << " ";


}