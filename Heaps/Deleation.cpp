// we can only delete root Node in heap

// 1) replace last node with first node
// 2) root node ko shi jagah pe daalo

// time - o(logn )

#include <iostream>
using namespace std;

class Heap
{
public:
    int totalsize;
    int *arr;
    int size;

    Heap(int totalsize)
    {
        this->totalsize = totalsize;
        arr = new int[totalsize];
        size = 0;
    }

    void insert(int data)
    {

        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            int parentindex = size / 2;

            if (arr[index] > arr[parentindex])
            {
                /* code */
                swap(arr[index], arr[parentindex]);
                index = parentindex;
            }
            else
            {
                break;
            }
        }
    }

    int DeleteElement()
    {
        int ans = arr[1];
        arr[1] = arr[size];
        size--;

        int index = 1;

        while (index < size)
        {
            int leftindex = 2 * index;
            int rightindex = (2 * index) + 1;

            int greatestindex = index;

            if (leftindex<size && arr[leftindex]> arr[greatestindex])
            {
                /* code */
                greatestindex = leftindex;
            }
            if (rightindex<size && arr[rightindex]>arr[greatestindex])
            {
                /* code */
                greatestindex = rightindex;
            }

            if (greatestindex == index)
            {
                /* code */return ans;
            }else{
                swap(arr[index] , arr[greatestindex]);
                index = greatestindex;
            }
            

            
        }
    }
};

int main()
{

    Heap h(20);
    h.arr[0] = -1;
    h.insert(100);
    h.insert(50);
    h.insert(60);
    h.insert(40);
    h.insert(45);

    cout << "Printing The Heap : " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    h.insert(110);
    cout << "Printing The Heap : " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    
    cout << "Deleated the Element " << h.DeleteElement() <<" Now The Heap is : " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
}