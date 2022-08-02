#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
  // example: first iteration j = 1
  for (int j = 1; j < arr.size(); j++) {
    // a = 2 because arr[1] = 2
    int a = arr[j];
    // j = 1, so i = 0
    int i = j - 1;
    // begin while loop because i = 0, 0 >= 0, true
    // a[0] > a = 5 > 2, true
    while (i >= 0 && arr[i] > a) {
      // still i = 0, so arr[0] = 5 is assigned arr[1]
      arr[i + 1] = arr[i];
      // i becomes -1, end ends this iteration of the while loop
      i = i - 1;
    }
    // a = 2 is assigned to arr[0], back to for loop
    // end of 1st iteration
    arr[i + 1] = a;
  }
}
void printArray(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
}
void processArray(vector<int> arr) {
  cout << endl << "Unsorted: " << endl;
  printArray(arr);
  insertionSort(arr);
  cout << endl << "Sorted: " << endl;
  printArray(arr);
  cout << endl << "--------" << endl;
}
int main() {

  vector<int> arr{5, 2, 4, 6, 1, 3};
  processArray(arr);
  vector<int> arr1{5, 2, 4, 6, 1, 43};
  processArray(arr1);
  vector<int> arr2{6, 7, 27, 9, 28, 3, 101};
  processArray(arr2);
  vector<int> arr3{11, 32, 64, 46, 31, 12};
  processArray(arr3);
}
