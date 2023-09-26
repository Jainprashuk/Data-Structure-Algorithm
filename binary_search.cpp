#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int> arr, int size)
{
    cout << "Elements Are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int BinarySearch(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int target;
    cout << "Enter The number you want to search : ";
    cin >> target;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
            mid = start + (end - start) / 2;
        }
        else
        {
            end = mid - 1;
            mid = start + (end - start) / 2;
        }
    }
    return -1;
}

int FirstOccurance(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int target;
    cout << "Enter The number you want to search : ";
    cin >> target;
    int ans;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int LastOcurrance(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans;

    int target;
    cout << "Enter The number you want to search : ";
    cin >> target;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int PeakElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start<end)
    {
        if (arr[mid]<arr[mid+1])
        {
            start = mid+1;
        }
        else{
            end=mid;
        }
        mid = start +(end-start)/2;
    }
    return start ;
}

int main()
{
    int size;
    cout << "Enter size of an array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the elements : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    // PrintArray(arr, size);

    // int SearchIndex = BinarySearch(arr);
    // cout << "element " << arr[SearchIndex] << " found at index " << SearchIndex << endl;

    // int FirstIndex = FirstOccurance(arr);
    // cout<<"First occurence of "<<arr[FirstIndex] << " is at index " << FirstIndex <<endl;

    // int LastIndex = LastOcurrance(arr);
    // cout<<"Last occurence of "<<arr[LastIndex] << " is at index " << LastIndex <<endl;

    // int TotalOccurance = LastIndex-FirstIndex+1 ;
    // cout <<"total occurence : "<< TotalOccurance;

    int PeakIndex = PeakElement(arr);
    cout<<"Peak Element is "<< arr[PeakIndex] << " Which is at index " << PeakIndex <<endl;

}