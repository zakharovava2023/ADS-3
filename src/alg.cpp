// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int result = 0, left = 0, right = size - 1, middle;
    while (left <= right) {
        middle = (left + right) / 2;
        if (value > arr[middle])
            left = middle + 1;
        if (value < arr[middle])
            right = middle - 1;
        if (value == arr[middle]) {
            int mid_left = middle - 1;
            int mid_right = middle + 1;
            result = 1;
            while ((mid_left >= 0) && (value == arr[mid_left])) {
                result++;
                mid_left--;
            }
            while ((mid_right < size) && (value == arr[mid_right])) {
                result++;
                mid_right++;
            }
            return result;
        }
    }
    return 0; // если ничего не найдено
}
