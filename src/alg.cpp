// Copyright 2021 NNTU-CS

int lower_bound(int *arr, int size, int value) {
  int left = 0, right = size;
  if (arr[0] >= value) {
    return 0;
  }
  while (right - left > 1) {
    int mid = (right + left) / 2;
    if (arr[mid] >= value) {
      right = mid;
    } else {
      left = mid;
    }
  }
  return right;
}

int cbinsearch(int *arr, int size, int value) {
  return lower_bound(arr, size, value + 1) - lower_bound(arr, size, value);
}
