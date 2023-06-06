// // find odd occuring element in an array

// // given array with lots of element where all element occured even number of times while 1 comes odd number of times

// #include <iostream>
// using namespace std;

// int linear_seach(int arr[], int size)
// {
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main()
// {

//     int arr[9] = {2, 2, 3, 3, 5, 6, 6, 7, 7};
//     cout << linear_seach(arr, 9);
// }











#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(s == e) {
      //single element
      return s;
    }

    //2 cases -> mid - even or mid - odd
    if(mid%2 == 0 ) {
      if(arr[mid] == arr[mid + 1] ) {
        s = mid + 2;
      }
      else {
        e = mid;
      }
    }
    else {
        if(arr[mid] == arr[mid-1]) {
          s = mid + 1;
        }
        else {
          e = mid - 1;
        }
    }
    mid = s + (e-s)/2;
  }
  return -1;
}

int main() {
  vector<int> arr{1,1,2,2,1};
  int ans = solve(arr);
  cout << "index is " << ans << endl;
  cout << "value is " << arr[ans] << endl;

  return 0;
}