#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr) {
  for (int i = 1; i < arr.size(); i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    
    arr[j + 1] = key;
  }
}

int main() {
  std::vector<int> arr = {5, 2, 9, 1, 5, 6};
  insertionSort(arr);
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
