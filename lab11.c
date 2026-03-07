#include <stdio.h>

int BinSearch(int data[], int size, int target);

int main() {

    int data[6] = {1, 2, 3, 4, 5, 7};
    int n = 6;
    int find = 5;

    int pos = BinSearch(data, n, find);

    if (pos != -1) {
        printf("Found %d at %d", find, pos);
    }else{
        printf("Not found");
    }
    return 0;
}

int BinSearch(int data[], int size, int target) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {

        int mid = (left + right) / 2;

        if (data[mid] == target)
            return mid;

        if (data[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}