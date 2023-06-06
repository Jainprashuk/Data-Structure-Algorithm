// // search in rotated sorted array


// #include<iostream>
// using namespace std ;

// int binary_pivot(int arr[] , int size){

//     int start = 0;
//     int ans;
//     int end = size-1;
//     // int mid = (start+end)/2;
//     int mid=start+(end-start)/2;

//     while (start <= end)
//     {
//         if (mid+1 > 10 && arr[mid]>arr[mid+1])
//         {
//             /* code */
//             return mid;
//         }
//         if (mid-1 >= 0 && arr[mid-1]>arr[mid])
//         {
//             /* code */
//             return mid -1;
//         }
        
//         if (arr[start]>= arr[mid])
//         {
//             /* code */
//             end = mid -1;
//         }
//         else{
//             start = mid -1 ; 
//             mid = start + (end-start)/2;
//         }
        
        
//     }
//     return -1;
// }


// int binary_search(int arr[],int key,int start , int end , int size){
    

//     int start = 0;
//     int end = size-1;
//     // int mid = (start+end)/2;
//     int mid=start+(end-start)/2;

//     while (start<=end)
//     {
//         if (arr[mid]==key)
//         {
//             return mid ;
//         }
//         else if (arr[mid]>key)
//         {
//             end = mid - 1;
//         }
//         else{
//             start= mid +1;
//         }

//         // mid = (start+end)/2;
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }

// int main(){

//     int arr[10] = {5,6,7,8,0,2,3,4,4,5};
//     int key;
//     cout<<"enter element u want to search"<<endl;
//     cin>>key;

//     int pivot_index = binary_pivot(arr ,10);
//     if (key >= arr[0] && key<= arr[pivot_index])
//     {
//         /* code */
//         int ans = binary_search(arr,10,3);
//     }
    

// }