#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], size;

    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the element in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting the array is: ";
    PrintArray(arr, size);
    cout << endl;

    BubbleSort(arr, size);
    cout << "After sorting the array is: ";
    PrintArray(arr, size);
}