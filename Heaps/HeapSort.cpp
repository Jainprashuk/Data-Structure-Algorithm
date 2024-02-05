// time : o(nlogn)

#include <iostream>
using namespace std;

class Heap
{
public:
    int *arr;
    int arrsize;
    int size;

    Heap(int arrsize)
    {
        this->arrsize = arrsize;
        size = 0;
        arr = new int[arrsize];
    }

    void insert(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            int parentindex = index / 2;

            if (arr[index] > arr[parentindex])
            {
                swap(arr[index], arr[parentindex]);
                index = parentindex;
            }
            else
            {
                break;
            }
        }
    }
};

void Heapify(int arr[], int n, int i)
{
    int index = i;
    int leftindex = 2 * i;
    int rightindex = 2 * i + 1;
    int largestindex = index;

    if (leftindex < n && arr[largestindex] < arr[leftindex])
    {
        largestindex = leftindex;
    }
    if (rightindex < n && arr[largestindex] < arr[rightindex])
    {
        largestindex = rightindex;
    }

    if (index != largestindex)
    {
        /* code */
        swap(arr[largestindex], arr[index]);
        index = largestindex;
        Heapify(arr, n, index);
    }
}

void BuildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        /* code */
        Heapify(arr, n, i);
    }
}

void HeapSort(int arr[], int n)
{

    while (n > 1)
    {
        swap(arr[n], arr[1]);
        n--;

        Heapify(arr, n, 1);
    }
}

int main()
{
    int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    int n = 11;

    BuildHeap(arr, n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    HeapSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}