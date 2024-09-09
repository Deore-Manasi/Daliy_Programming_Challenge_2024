#include<iostream>
using namespace std;



void Sorted_Array(int arr[], int n) {
    int start = 0;
    int mid = 0;
    int end = n - 1;
    

   while (mid <= end) {
    if (arr[mid] == 0) {
        swap(arr[start], arr[mid]);
        start++;
        mid++;
    } else if (arr[mid] == 1) {
        mid++;
    } else if (arr[mid] == 2) {
        swap(arr[mid], arr[end]);
        end--;
    }
}
}

int main() {
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    Sorted_Array(arr, n);

    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

