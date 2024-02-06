#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Heap{
    public:
    int totalsize;
    int size;
    int *arr;
    
    Heap(int totalsize){
        this->totalsize = totalsize;
        arr = new int[totalsize];
        size = 0;
    }
    
    void Insert(int data){
        size = size+1;
        int index = size;
        arr[size] = data;
        
        while(index>1){
            int parentindex = index/2;
            if(arr[parentindex]<arr[index]){
                swap(arr[parentindex],arr[index]);
            }else{
                break;
            }
        }
    }
    
    void DeleteElement(){
        int index = 1;
        arr[index] = arr[size];
        size--;
        
       
        
        while(index<size){
            
             int maxindex = index;
        int leftindex = 2*index;
        int rightindex = (2*index)+1;
        
            if(leftindex<size && arr[leftindex]>arr[maxindex]){
                maxindex = leftindex;
            }
            if(rightindex<size && arr[rightindex]>arr[maxindex]){
                maxindex = rightindex;
            }
            
            if(maxindex != index){
                swap(arr[maxindex] , arr[index]);
                index = maxindex;
            }else{
                return;
            }
        }
    }
};

void Heapify(int arr[] , int size , int  i){
    
    int index = i ;
    int leftindex = i*2;
    int rightindex = (i*2)+1;
    int maxindex = index;
    
     if(leftindex<size && arr[leftindex]>arr[maxindex]){
         maxindex = leftindex;
     }
     
     if(rightindex<size && arr[rightindex]>arr[maxindex]){
         maxindex = rightindex;
     }
     
     if(maxindex != index){
         swap(arr[maxindex] , arr[index]);
         index = maxindex;
         Heapify(arr ,size , index);
     }
}

void BuildHeap(int arr[] , int n){
    for(int i = n/2 ; i>0 ; i--){
        Heapify(arr,n,i);
    }
}

void HeapSort(int arr[] , int n){
    while(n>1){
        swap(arr[n] , arr[1]);
        n--;
        Heapify(arr,n,1);
    }
}

int main(){
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