int findpivot(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start < end) {
    if (arr[mid] >= arr[0]) {
      start = mid + 1;
    } 
    else {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}

int binarysearch(int arr[], int s, int e, int key) {
  int start = s;
  int end = e;
  int mid = start + (end - start) / 2;
  while (start <= end){
    if (arr[mid] == key) {
      return mid;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    }
    if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int search(int *arr, int n, int key) {
  int pivot = findpivot(arr, n);
  if (key >= arr[pivot] && key <= arr[n - 1]) {
    return binarysearch(arr, pivot, n - 1, key);
  } else {
    return binarysearch(arr, 0, pivot - 1, key);
  }
}
