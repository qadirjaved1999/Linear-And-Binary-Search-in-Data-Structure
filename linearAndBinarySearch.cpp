#include<iostream>
using namespace std;

// Linear Search => sorted or unsorted array no metter
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
       if(arr[i] == element){
           return i;
       }
    }
    return -1;
}
// Array must be sorted for binary array
int binearSearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;

    // searching start
    while (low <= high)
    {
            mid = (low + high) / 2;

        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1; 
        }
        else{
            high = mid - 1;
        }
        // searching end
    }
    return -1;
    
}

int main()
{
 // unsorted array for Linear search
// int arr[] = {1, 3, 5, 56, 4, 23, 5, 4, 655, 56, 34}; // unsorted array
// int size = sizeof(arr)/sizeof(int);

    // sorted array for Binear search
    int arr[] = {1, 3, 5, 56, 64, 123, 225, 444}; // unsorted array
    int size = sizeof(arr)/sizeof(int);
    // cout<<size<<endl;
    int element = 56;
    int seearchIndex = binearSearch(arr, size, element);
    cout<<"The Element "<<element<<" was found at in index = "<<seearchIndex<<endl;

 return 0;
}